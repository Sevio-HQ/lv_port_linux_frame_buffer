#include "gps.h"
#include "gpsdclient.h"
#include "lvgl/lvgl.h"

static struct gps_data_t gpsdata;
static struct fixsource_t source;
static enum deg_str_type deg_type = deg_dd;

static float altfactor = 1; //METERS_TO_FEET;
static char *altunits = "m"; // "ft";

typedef struct myGpsData {
    int     status;
    int     mode;
    double  lat;
    double  log;
    double  alt;
    int     nr_sat;
}tMyGpsData;

// This gets called once for each new sentence.
static void update_lcd(struct gps_data_t *gpsdata)
{
  char tmpbuf[255];
  const char *gridsquare;

 // Get our location in Maidenhead.
  gridsquare = maidenhead(gpsdata->fix.latitude,gpsdata->fix.longitude);

  // Fill in the latitude and longitude.
  if (gpsdata->fix.mode >= MODE_2D) {
        int track;
        char *s;

        s = deg_to_str(deg_type, gpsdata->fix.latitude);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1,
                "widget_set gpsd one 1 1 {Lat: %s %c}\n", s,
                (gpsdata->fix.latitude < 0) ? 'S' : 'N');

        LV_LOG_INFO("%s",tmpbuf);
        s = deg_to_str(deg_type, gpsdata->fix.longitude);
        snprintf(tmpbuf, sizeof(tmpbuf) - 1,
                "{Lon: %s %c }\n", 
                s,(gpsdata->fix.longitude < 0) ? 'W' : 'E');
        LV_LOG_INFO("%s",tmpbuf);
  }
    if (gpsdata->fix.mode == MODE_3D) {
        snprintf(tmpbuf, sizeof(tmpbuf) - 1,
             "widget_set gpsd four 1 4 { %d %s }\n",
            (int)(gpsdata->fix.altMSL * altfactor), altunits);
    }
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
     LV_LOG_INFO("GPSD get data...");
    //for (;;) { /* heart of the client */
        if (!gps_waiting(&gpsdata, 50000000)) {
            LV_LOG_ERROR("lcdgps: error while waiting\n");
            return;
        } else {
            LV_LOG_INFO("GPSD read data...");  

            int status = gps_read(&gpsdata, NULL, 0);
            if (status == 0)
            {
                update_lcd(&gpsdata);
            }else{
                LV_LOG_ERROR("GPS read failed %d", status);
            }
        }

    //}
}