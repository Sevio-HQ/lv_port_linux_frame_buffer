#ifndef UBUS_H
#define UBUS_H

#include <stdbool.h>
#define MAX_IFNAME_LEN	   	256
#define MAX_IP_LEN 			16

typedef void (*ubus_gui_update_handler_t)(bool _ifup, const char* _ip,
				    unsigned int _mask, const char* _gw, bool dhcp);

typedef struct ubus_ifStatus_param
{
	/* data */
	ubus_gui_update_handler_t cb;
	char* dev;
	char* route;
	char* defGw;
	char* ipv4;
    unsigned long* mask;
	bool* ifup;
	bool* dhcp;
}t_ubus_ifStatus_param;




typedef void (*ubus_gui_update_wifiSignal_handler_t)(bool _ap, int _signal);

typedef struct ubus_iwinfo_getSignal_param
{
	/* data */
	ubus_gui_update_wifiSignal_handler_t cb;
	const char* _ssid;
}t_ubus_iwinfo_getSignal_param;

typedef void (*ubus_gui_update_vpnstatus_handler_t)(bool _uplink, bool _ipAddr, bool _gw, bool _internet, bool _vpnPorts);

int updateInterfaceStatusCb(const char* iface, ubus_gui_update_handler_t cb);

int updateVpnStatus(ubus_gui_update_vpnstatus_handler_t cb );

bool updateWiFiSignal(t_ubus_iwinfo_getSignal_param* _param );

bool ubus_init(void);

void ubus_finish(void);

#endif