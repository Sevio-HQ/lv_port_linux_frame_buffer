#include "gps.h"
#include "gpsdclient.h"
#include "lvgl/lvgl.h"
#include "ui2.h"
#include "time.h"

static struct gps_data_t gpsdata;
static struct fixsource_t source;
static enum deg_str_type deg_type = deg_dd;

static float altfactor = 1; //METERS_TO_FEET;
static char *altunits = "m"; // "ft";
#define FEET_TO_METERS 3.281f

typedef struct myGpsData {
    int     status;
    int     mode;
    double  lat;
    double  log;
    double  alt;
    int     nr_sat;
}tMyGpsData;



// This gets called once for each new sentence.
static int update_lcd(struct gps_data_t *gpsdata)
{
  char tmpbuf[255];
  const char *gridsquare;
  int result = -1;

 // Get our location in Maidenhead.
  gridsquare = maidenhead(gpsdata->fix.latitude,gpsdata->fix.longitude);

  // Fill in the latitude and longitude.
  if (gpsdata->fix.mode >= MODE_2D) {
        int track;
        char *s;

        lv_label_set_text(ui_GPS_Label12,"FIXED");
        lv_obj_set_style_bg_color(ui_GPS_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_obj_set_style_border_color(ui_GPS_Panel3, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );

        s = deg_to_str(deg_type, gpsdata->fix.latitude);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%s %c", s, (gpsdata->fix.latitude < 0) ? 'S' : 'N');
        lv_label_set_text(ui_GPS_Latitude_label, tmpbuf);
        LV_LOG_INFO("Lat: %s",tmpbuf);
        s = deg_to_str(deg_type, gpsdata->fix.longitude);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%s %c", s,(gpsdata->fix.longitude < 0) ? 'W' : 'E');
        lv_label_set_text(ui_GPS_Longitude_label, tmpbuf);
        LV_LOG_INFO("Long: %s",tmpbuf);

        //floatToStr(tmpbuf, gpsdata->fix.altMSL, 1);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%.1f", gpsdata->fix.altMSL);
        lv_label_set_text(ui_GPS_altitude_label, tmpbuf);
        LV_LOG_INFO("%f %s",gpsdata->fix.altMSL, tmpbuf);

        struct tm tm = *localtime(&gpsdata->fix.time.tv_sec);
        lv_label_set_text_fmt(ui_GPS_LastFix_label, "%02d:%02d:%02d", tm.tm_hour + (tm.tm_isdst==1 ? 1:0), tm.tm_min, tm.tm_sec);

        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%d/%d", gpsdata->satellites_visible, gpsdata->satellites_used);
        lv_label_set_text(ui_GPS_altitude_label1, tmpbuf);
        LV_LOG_INFO("Seen/Used: %d/%d",gpsdata->satellites_visible, gpsdata->satellites_used);

        result = 0;
  }else{
    lv_label_set_text(ui_GPS_Label12,"NOT FIXED");
    lv_obj_set_style_bg_color(ui_GPS_Panel3, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_border_color(ui_GPS_Panel3, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_label_set_text(ui_GPS_Latitude_label,"--");
    lv_label_set_text(ui_GPS_Longitude_label, "--");
    lv_label_set_text(ui_GPS_altitude_label, "--");
    lv_label_set_text_fmt(ui_GPS_LastFix_label, "--");
    lv_label_set_text(ui_GPS_altitude_label1, "0/0");
  }

  return result;
}

void gpsDataInit()
{
    gpsd_source_spec(NULL, &source);
    LV_LOG_INFO("GPSD server running %s:%s", source.server, source.port);
    
    /* Open the stream to gpsd. */
    if (gps_open(source.server, source.port, &gpsdata) != 0) {
        LV_LOG_ERROR("Cannot open gps source\n");
        return;
    }

    /* Here's where updates go. */
    unsigned int flags = WATCH_ENABLE;
    if (source.device != NULL)
        flags |= WATCH_DEVICE;
    (void)gps_stream(&gpsdata, flags, source.device);
}

void getGpsData()
{
    int result = -1;
     LV_LOG_INFO("GPSD get data...");
    //for (;;) { /* heart of the client */
    do {
        if (!gps_waiting(&gpsdata, 50000000)) {
            LV_LOG_ERROR("lcdgps: error while waiting\n");
            return;
        } else {
            LV_LOG_INFO("GPSD read data...");  

            int status = gps_read(&gpsdata, NULL, 0);
            if (status > 0)
            {
                result = update_lcd(&gpsdata);
            }else{
                LV_LOG_ERROR("GPS read failed %d", status);
            }
        }

    }while (result != 0);
    // Close the GPS
    gps_stream(&gpsdata, WATCH_DISABLE, NULL);
    gps_close (&gpsdata);
}