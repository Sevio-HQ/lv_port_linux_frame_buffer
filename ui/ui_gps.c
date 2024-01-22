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
#undef FEET_TO_METERS
#define FEET_TO_METERS 3.281f

typedef struct myGpsData {
    int     status;
    int     mode;
    double  lat;
    double  log;
    double  alt;
    int     nr_sat;
}tMyGpsData;

static void default_lcd()
{
    lv_label_set_text(ui_GPS_status_value,"Not Fixed");
    lv_obj_set_style_bg_color(ui_GPS_status_panel, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_obj_set_style_border_color(ui_GPS_status_panel, lv_color_hex(0xf3e32a), LV_PART_MAIN | LV_STATE_DEFAULT );
    lv_label_set_text(ui_GPS_latitude_value,"--");
    lv_label_set_text(ui_GPS_longitude_value, "--");
    lv_label_set_text(ui_GPS_altitude_value, "--");
    lv_label_set_text_fmt(ui_GPS_lastfix_value, "--");
    lv_label_set_text(ui_GPS_satellites_value, "0/0");
}

// This gets called once for each new sentence.
static int update_lcd(struct gps_data_t *gpsdata)
{
  char tmpbuf[255];
  const char *gridsquare;
  int result = -1;

 // Get our location in Maidenhead.
  if (!gpsdata) return result;
  
  gridsquare = maidenhead(gpsdata->fix.latitude,gpsdata->fix.longitude);

  // Fill in the latitude and longitude.
  if (gpsdata->fix.mode >= MODE_2D) {
        int track;
        char *s;

        lv_label_set_text(ui_GPS_status_value,"Fixed");
        lv_obj_set_style_bg_color(ui_GPS_status_panel, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_obj_set_style_border_color(ui_GPS_status_panel, lv_color_hex(0x11F308), LV_PART_MAIN | LV_STATE_DEFAULT );

        s = deg_to_str(deg_type, gpsdata->fix.latitude);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%s %c", s, (gpsdata->fix.latitude < 0) ? 'S' : 'N');
        lv_label_set_text(ui_GPS_latitude_value, tmpbuf);
        LV_LOG_INFO("Lat: %s",tmpbuf);
        s = deg_to_str(deg_type, gpsdata->fix.longitude);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%s %c", s,(gpsdata->fix.longitude < 0) ? 'W' : 'E');
        lv_label_set_text(ui_GPS_longitude_value, tmpbuf);
        LV_LOG_INFO("Long: %s",tmpbuf);

        //floatToStr(tmpbuf, gpsdata->fix.altMSL, 1);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%.1f", gpsdata->fix.altMSL);
        lv_label_set_text(ui_GPS_altitude_value, tmpbuf);
        LV_LOG_INFO("%f %s",gpsdata->fix.altMSL, tmpbuf);

        struct tm tm = *localtime(&gpsdata->fix.time.tv_sec);
        lv_label_set_text_fmt(ui_GPS_lastfix_value, "%02d:%02d:%02d", tm.tm_hour + (tm.tm_isdst==1 ? 1:0), tm.tm_min, tm.tm_sec);
        LV_LOG_INFO("%02d:%02d:%02d", tm.tm_hour + (tm.tm_isdst==1 ? 1:0), tm.tm_min, tm.tm_sec);

        int i; int _used = 0;
        for(i=0;i<gpsdata->satellites_visible;i++) {
            LV_LOG_INFO("PRN %3d az %5.1f el %4.1f u:%d\n",
                gpsdata->skyview[i].PRN,
                 gpsdata->skyview[i].azimuth,
                 gpsdata->skyview[i].elevation, 
                 gpsdata->skyview[i].used);
            if (gpsdata->skyview[i].used) {
                ++_used;
          }
      }
        snprintf(tmpbuf, sizeof(tmpbuf) - 1, "%d/%d", gpsdata->satellites_visible, _used /* gpsdata->satellites_used*/);
        lv_label_set_text(ui_GPS_satellites_value, tmpbuf);
        LV_LOG_INFO("Seen/Used: %d/%d(%d)",gpsdata->satellites_visible, gpsdata->satellites_used, _used);

        result = 0;
  }else{
    default_lcd();
  }

  return result;
}

bool gpsDataInit()
{
    gpsd_source_spec(NULL, &source);
    LV_LOG_INFO("GPSD server running %s:%s dev:%s", 
        source.server, source.port, source.device);
    
    /* Open the stream to gpsd. */
    if (gps_open(source.server, source.port, &gpsdata) != 0) {
        LV_LOG_ERROR("Cannot open gps source\n");
        default_lcd();
        return false;
    }

    /* Here's where updates go. */
    unsigned int flags = WATCH_ENABLE;
    if (source.device != NULL)
        flags |= WATCH_DEVICE;
    (void)gps_stream(&gpsdata, flags, source.device);
    return true;
}

int getGpsData()
{
    int result = -1;
    int maxRetry = 5;
     LV_LOG_INFO("GPSD get data...");
    //for (;;) { /* heart of the client */
    do {
        if (!gps_waiting(&gpsdata, 2000000)) {
            LV_LOG_ERROR("getGpsData: error while waiting\n");
            return -1;
        } else {
            LV_LOG_INFO("GPSD read data...");  

            int status = gps_read(&gpsdata, NULL, 0);
            if (status >= 0)
            {
                result = update_lcd(&gpsdata);
            }else{
                LV_LOG_ERROR("GPS read failed %d", status);
            }
        }

    }while((result != 0) && (--maxRetry));
    // Close the GPS
    gps_stream(&gpsdata, WATCH_DISABLE, NULL);
    gps_close (&gpsdata);
    return result;
}

int refreshGPS()
{
    return (gpsDataInit() ? getGpsData() : -1);
}


int refreshGPS_ui()
{
    return update_lcd(&gpsdata);
}