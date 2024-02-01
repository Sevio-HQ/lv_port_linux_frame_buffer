#include "lvgl/lvgl.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <uci.h>
#include "ui_update.h"

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
	uci_free_context(uci);
}

int uci_config_getLanDhcpServer()
{
    struct uci_context* uci;
	struct uci_package* p;
	struct uci_element* e;
	const char* str;
	int val = -1;

	uci = uci_alloc_context();
	if (uci == NULL) {
		return -1;
	}

	if (uci_load(uci, "dhcp", &p)) {
		uci_free_context(uci);
		return -1;
	}

	uci_foreach_element(&p->sections, e)
	{
		struct uci_section* s = uci_to_section(e);
        // printf("** name: %s\r\n", e->name);
        // printf("** type: %s\r\n", s->type);
		if ((strcmp(s->type, "dhcp") == 0) && (strcmp(e->name, "lan") == 0)) {
		    str = uci_lookup_option_string(uci, s, "dhcpv4");
			if (str != NULL) {
				if (strcmp(str,"server") == 0) val = 1;
				else val = 0; 
                LV_LOG_INFO("%s dhcpv4: %s", e->name, str);
			}
        }
    }
	uci_free_context(uci);

	return val;
}

int uci_config_getWifiMode(char* _mode, bool* _hidden, char* _ssid, bool* _disabled)
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

			val = uci_lookup_option_int(uci, s, "disabled");
            if (val == 0) 
            {
                *_disabled = false;
            }
            else *_disabled = true;

			LV_LOG_INFO("Wifi SSID:%s mode:%s hidden:%d disabled:%d", _ssid, _mode, *_hidden, *_disabled);
        }

    }
	uci_free_context(uci);
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
	uci_free_context(uci);
}

int uci_config_set_pingcheck()
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

	if (uci_load(uci, "pingcheck", &p)) {
		uci_free_context(uci);
		return 0;
	}

	uci_foreach_element(&p->sections, e)
	{
		struct uci_section* s = uci_to_section(e);
        printf("** name:%s type:%s\r\n", e->name, s->type);
		if (strcmp(s->type, "interface") == 0) {

            const char* name = uci_lookup_option_string(uci, s, "name");
            const char* host = uci_lookup_option_string(uci, s, "host");
            LV_LOG_INFO("name:%s host: %s", name, host);
			bool up; unsigned long mask; char* gw; char* ip;
			if (getIfStatEntry(name, &up, &gw, &ip, &mask))
			{
				if (strcmp(gw, host) != 0) 
				{
					//up date uci configuration
					struct uci_ptr ptr = { .p = p, .s = s, .option = "host", .value = gw };
					uci_set(uci, &ptr);
					uci_commit(uci, &p, true);
					LV_LOG_INFO("CHANGED name:%s gw:%s host:%s", name, gw, host);

				}
				LV_LOG_INFO("name:%s up:%s ip:%s mask:%lu gw:%s", name, up ? "UP" : "DOWN", ip, mask, gw);
			}
        }
    }
	uci_free_context(uci);
}