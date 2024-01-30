#ifndef UBUS_H
#define UBUS_H

#include <stdbool.h>

typedef void (*ubus_gui_update_handler_t)(bool _ifup, const char* _ip,
				    unsigned int _mask, const char* _gw);


typedef void (*ubus_gui_update_wifiSignal_handler_t)(bool _ap, int _signal);

typedef struct ubus_iwinfo_getSignal_param
{
	/* data */
	ubus_gui_update_wifiSignal_handler_t cb;
	const char* _ssid;
}t_ubus_iwinfo_getSignal_param;

typedef void (*ubus_gui_update_vpnstatus_handler_t)(bool _uplink, bool _ipAddr, bool _gw, bool _internet, bool _vpnPorts);

int updateInterfaceStatus(const char* iface, ubus_gui_update_handler_t cb);

int updateVpnStatus(ubus_gui_update_vpnstatus_handler_t cb );

bool updateWiFiSignal(t_ubus_iwinfo_getSignal_param* _param );

bool ubus_init(void);

void ubus_finish(void);

#endif