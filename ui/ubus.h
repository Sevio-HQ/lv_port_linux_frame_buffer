#ifndef UBUS_H
#define UBUS_H

#include <stdbool.h>
#include "ui_update.h"

typedef void (*ubus_gui_update_handler_t)(bool _ifup, const char* _ip,
				    unsigned int _mask, const char* _gw, bool dhcp);

typedef struct ubus_ifStatus_param
{
	/* data */
	ubus_gui_update_handler_t cb;
	const char* ifname;
	char* dev;
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

typedef struct ubus_modeminfo_param
{
	char* _cops;
	char* _csq;
}t_ubus_modeminfo_param;

typedef void (*ubus_gui_update_vpnstatus_handler_t)(tCheckStatus _uplink, tCheckStatus _ipAddr, tCheckStatus _gw, tCheckStatus _internet, tCheckStatus _vpnPorts);

typedef void (*ubus_gui_update_portstatus_handler_t)(bool status, bool carrier, bool autoneg, char* speed);

typedef struct ubus_PortStatus_param
{
	/* data */
	ubus_gui_update_portstatus_handler_t cb;
	const char* ifname;
}t_ubus_PortStatus_param;


int updateInterfaceStatusCb(const char* iface, ubus_gui_update_handler_t cb);

int updateVpnStatus(ubus_gui_update_vpnstatus_handler_t cb );

bool updateWiFiSignal(t_ubus_iwinfo_getSignal_param* _param );

int updatePortsStatus(const char* ifname, ubus_gui_update_portstatus_handler_t cb);

bool ubus_modeminfo_status(t_ubus_modeminfo_param* _param);

bool ubus_init(void);

void ubus_finish(void);

#endif