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
		    // str = uci_lookup_option_string(uci, s, "dhcpv4");
			// if (str != NULL) {
			// 	if (strcmp(str,"server") == 0) val = 1;
			// 	else val = 0; 
            //     LV_LOG_INFO("%s dhcpv4: %s", e->name, str);
			// }
			str = uci_lookup_option_string(uci, s, "disabled");
			if (str != NULL) {
				if (strcmp(str,"0") == 0) val = 1;
				else val = 0; 
                LV_LOG_INFO("%s disabled: %s", e->name, str);
			}
        }
    }
	uci_free_context(uci);

	return val;
}

int uci_config_getModemInfo(char* lockFile, char* modemTty)
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

	if (uci_load(uci, "modeminfo", &p)) {
		uci_free_context(uci);
		return -1;
	}

	uci_foreach_element(&p->sections, e)
	{
		struct uci_section* s = uci_to_section(e);
        LV_LOG_INFO("** name: %s type:%s", e->name, s->type);

		if (strcmp(s->type, "modeminfo") == 0) {
			str = uci_lookup_option_string(uci, s, "device");
			LV_LOG_INFO("%s: %s", s->type, str);
			if ((str != NULL)&&(lockFile != NULL)) {
				if (strcpy(lockFile, str) == 0) val = 1;
				else val = 0; 
                LV_LOG_INFO("%s disabled: %s", e->name, str);
			}
			str = uci_lookup_option_string(uci, s, "lock");
			LV_LOG_INFO("%s: %s", s->type, str);
			// if (str != NULL) {
			// 	if (strcmp(str,"0") == 0) val = 1;
			// 	else val = 0; 
            //     LV_LOG_INFO("%s disabled: %s", e->name, str);
			// }
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

bool uci_config_set_pingcheck(char* ifname)
{
    struct uci_context* uci;
	struct uci_package* p;
	struct uci_element* e;
	struct uci_section* s;
	const char* str;
    int val = 0;
	const char* name;
	const char* host;
	bool up; unsigned long mask; char* gw; char* ip;

	if (ifname == NULL) return 0;

	uci = uci_alloc_context();
	if (uci == NULL) {
		return 0;
	}

	if (uci_load(uci, "pingcheck", &p)) {
		uci_free_context(uci);
		return 0;
	}

	bool found = false; bool changed = false; 

	uci_foreach_element(&p->sections, e)
	{
		s = uci_to_section(e);

		if ((s)&&(strcmp(s->type, "interface") == 0)) {

            name = uci_lookup_option_string(uci, s, "name");
            host = uci_lookup_option_string(uci, s, "host");

			if ((name) && (strcmp(ifname, name) == 0) )
			{
				found = true;
				if (getIfStatEntry(name, &up, &gw, &ip, &mask))
					if ((gw) && (host) &&(strcmp(gw, host) != 0))
					{
						changed = true;
						//up date uci configuration
						struct uci_ptr ptr = { .p = p, .s = s, .option = "host", .value = gw };
						int ret = uci_set(uci, &ptr);

						LV_LOG_INFO("CHANGED name:%s gw:%s host:%s ret:%d", name, gw, host, ret);
					}
				LV_LOG_INFO("name:%s up:%s ip:%s mask:%lu gw:%s", name, up ? "UP" : "DOWN", ip, mask, gw);
			}
        }
    }

	if (!found) 
	{
		LV_LOG_INFO("If not found name:%s ADD", ifname);
		if (getIfStatEntry(ifname, &up, &gw, &ip, &mask))
		{
			LV_LOG_INFO("name:%s up:%s ip:%s mask:%lu gw:%s", ifname, up ? "UP" : "DOWN", ip, mask, gw);
			if (up)
			{
				struct uci_ptr ptr = { .p = p };
				uci_add_section(uci, p, "interface", &ptr.s);

				if (ptr.s)
				{
					ptr.o = NULL;
					ptr.option = "host";
					ptr.value = gw;
					uci_set(uci, &ptr);

					ptr.o = NULL;
					ptr.option = "name";
					ptr.value = ifname;
					uci_set(uci, &ptr);
						
					changed = true;
				}else{
					LV_LOG_ERROR("Section not created");
				}
			}
		}
	}
	if (changed) uci_commit(uci, &p, false);
	uci_free_context(uci);

	return changed;
}