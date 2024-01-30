#include "lvgl/lvgl.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <uci.h>

/** analogous to uci_lookup_option_string from uci.h, returns -1 when not found
 */
static int uci_lookup_option_int(struct uci_context* uci, struct uci_section* s,
								 const char* name)
{
	const char* str = uci_lookup_option_string(uci, s, name);
	return str == NULL ? -1 : atoi(str);
}

int uci_config_getServiceTag(char* _serviceTag)
{
    struct uci_context* uci;
	struct uci_package* p;
	struct uci_element* e;
	const char* str;

	uci = uci_alloc_context();
	if (uci == NULL) {
		return 0;
	}

	if (uci_load(uci, "sevio", &p)) {
		uci_free_context(uci);
		return 0;
	}

	uci_foreach_element(&p->sections, e)
	{
		struct uci_section* s = uci_to_section(e);
        //printf("** type: %s\r\n", s->type);
		if (strcmp(s->type, "internal") == 0) {
		    str = uci_lookup_option_string(uci, s, "service_tag");
			if (str != NULL) {
				strcpy(_serviceTag, str);
                LV_LOG_INFO("Service Tag: %s", _serviceTag);
			}
        }
    }
}

int uci_config_getWifiMode(char* _mode, bool* _hidden, char* _ssid)
{
    struct uci_context* uci;
	struct uci_package* p;
	struct uci_element* e;
	const char* str;
    int val = 0;

	uci = uci_alloc_context();
	if (uci == NULL) {
		return 0;
	}

	if (uci_load(uci, "wireless", &p)) {
		uci_free_context(uci);
		return 0;
	}

	uci_foreach_element(&p->sections, e)
	{
		struct uci_section* s = uci_to_section(e);
        //printf("** type: %s\r\n", s->type);
		if (strcmp(s->type, "wifi-iface") == 0) {
		    str = uci_lookup_option_string(uci, s, "mode");
			if (str != NULL) {
				strcpy(_mode, str);
			}

            val = uci_lookup_option_int(uci, s, "hidden");
            if (val == 0) 
            {
                *_hidden = false;
            }
            else *_hidden = true;

		    str = uci_lookup_option_string(uci, s, "ssid");
			if (str != NULL) {
				strcpy(_ssid, str);
			}
			LV_LOG_INFO("Wifi SSID:%s mode:%s hidden:%d", _ssid, _mode, *_hidden);
        }

    }
}

int uci_config_isWifiDisabled(bool* _wifiDis)
{
    struct uci_context* uci;
	struct uci_package* p;
	struct uci_element* e;
	const char* str;
    int val = 0;

	uci = uci_alloc_context();
	if (uci == NULL) {
		return 0;
	}

	if (uci_load(uci, "wireless", &p)) {
		uci_free_context(uci);
		return 0;
	}

	uci_foreach_element(&p->sections, e)
	{
		struct uci_section* s = uci_to_section(e);
        //printf("** type: %s\r\n", s->type);
		if (strcmp(s->type, "wifi-iface") == 0) {

            val = uci_lookup_option_int(uci, s, "disabled");
            LV_LOG_INFO("WiFi disabled: %d", val);
            if (val == 0) 
            {
                *_wifiDis = false;
            }
            else *_wifiDis = true;
        }
    }
}