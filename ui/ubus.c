#ifdef LIBUBUS
#include <libubus.h>
//#include <libubox.h>
#include <unistd.h>
#include "lvgl/lvgl.h"
#include "libubox/blob.h"
#include "libubox/blobmsg_json.h"
#include "ubus.h"
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>


#define UBUS_TIMEOUT	   	3000 /* 3 sec */


static struct ubus_context* ctx;

/*** network interface events ***/

static struct ubus_event_handler interface_event_handler;

static void dumpBlobJson(struct blob_attr* msg)
{
	char *str;
	
	if (msg == NULL) return;

	str = blobmsg_format_json_indent(msg, true, 0);
	printf("%s\n", str);
	free(str);
}


enum {
	IFSTAT_UP,
	IFSTAT_DHCP,
	IFSTAT_DEVICE,
	IFSTAT_L3DEVICE,
	IFSTAT_ROUTE,
	IFSTAT_TARGET,
    IFSTAT_IPV4,
};

static const struct blobmsg_policy ifstat_policy[] = {
	[IFSTAT_UP] = {.name = "up", .type = BLOBMSG_TYPE_BOOL},
	[IFSTAT_DHCP] = {.name = "dhcp", .type = BLOBMSG_TYPE_BOOL},
	[IFSTAT_DEVICE] = {.name = "device", .type = BLOBMSG_TYPE_STRING},
	[IFSTAT_L3DEVICE] = {.name = "l3_device", .type = BLOBMSG_TYPE_STRING},
	[IFSTAT_ROUTE] = {.name = "route", .type = BLOBMSG_TYPE_ARRAY},
	[IFSTAT_IPV4] = {.name = "ipv4-address", .type = BLOBMSG_TYPE_ARRAY},
};

enum {
	ROUTE_TARGET,
	ROUTE_MASK,
	ROUTE_NEXTHOP,
	ROUTE_SOURCE
};

static const struct blobmsg_policy route_policy[] = {
	[ROUTE_TARGET] 	= {.name = "target", .type = BLOBMSG_TYPE_STRING},
	[ROUTE_MASK] 	= {.name = "mask", .type = BLOBMSG_TYPE_INT32},
	[ROUTE_NEXTHOP] = {.name = "nexthop", .type = BLOBMSG_TYPE_STRING},
	[ROUTE_SOURCE]  = {.name = "source", .type = BLOBMSG_TYPE_STRING},
};


enum {
	IPV4_ADDR,
	IPV4_MASK,
};

static const struct blobmsg_policy ipv4_policy[] = {
	[IPV4_ADDR] = {.name = "address", .type = BLOBMSG_TYPE_STRING},
	[IPV4_MASK] = {.name = "mask", .type = BLOBMSG_TYPE_INT32},
};

enum {
	IWINFO_SSID,
	IWINFO_BSSID,
	IWINFO_MODE,
	IWINFO_CH,
};

static const struct blobmsg_policy iwinfo_policy[] = {
	[IWINFO_SSID] = {.name = "ssid", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_BSSID] = {.name = "bssid", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_MODE] = {.name = "mode", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_CH] = {.name = "channel", .type = BLOBMSG_TYPE_INT32},
};


/*** generic result callback: just copies msg to last_result_msg ***/

static void ubus_ifStatus_cb(__attribute__((unused)) struct ubus_request* req,
						   __attribute__((unused)) int type,
						   struct blob_attr* msg)
{
	if (!msg) {
		return;
	}
	int ret;

	const char* dev = "";
	const char* route = "";
	const char* defGw = "";
	const char* ipv4 = "";
    unsigned long mask = 0;
	bool ifup = false;
	bool dhcp = false;

	struct blob_attr* tb[ARRAY_SIZE(ifstat_policy)];
	blobmsg_parse(ifstat_policy, ARRAY_SIZE(ifstat_policy), tb,
				  blob_data(msg), blob_len(msg));

	// up
	if (tb[IFSTAT_UP])
		ifup = blobmsg_get_bool(tb[IFSTAT_UP]) ? true : false;

	//dhcp
	if (tb[IFSTAT_DHCP])
		dhcp = blobmsg_get_bool(tb[IFSTAT_DHCP]) ? true : false;

	// device
	if (tb[IFSTAT_L3DEVICE]) {
		dev = blobmsg_get_string(tb[IFSTAT_L3DEVICE]);
	} else if (tb[IFSTAT_DEVICE]) {
		dev = blobmsg_get_string(tb[IFSTAT_DEVICE]);
	} else {
		ret = -1;
		goto exit; // error
	}
	if (strlen(dev) >= MAX_IFNAME_LEN) {
		LV_LOG_ERROR("updateInterfaceStatus: device_len too short");
		ret = -1;
		goto exit; // error
	}

	// routes
	//  "route": [
    //             {
    //                     "target": "0.0.0.0",
    //                     "mask": 0,
    //                     "nexthop": "192.168.178.1",
    //                     "source": "192.168.178.74/32"
    //             }
    //     ],
	if (tb[IFSTAT_ROUTE]) {
		int len = blobmsg_data_len(tb[IFSTAT_ROUTE]);
		struct blob_attr* arr = blobmsg_data(tb[IFSTAT_ROUTE]);
		struct blob_attr* attr;
		__blob_for_each_attr(attr, arr, len)
		{
			struct blob_attr* tb2[ARRAY_SIZE(route_policy)];
			blobmsg_parse(route_policy, ARRAY_SIZE(route_policy), tb2,
						blobmsg_data(attr), blobmsg_data_len(attr));
			if (tb2[ROUTE_TARGET]) {
				route = blobmsg_get_string(tb2[ROUTE_TARGET]);
				if (route != NULL && strcmp(route, "0.0.0.0") == 0) {
					if (tb2[ROUTE_NEXTHOP]) {
						defGw = blobmsg_get_string(tb2[ROUTE_NEXTHOP]);
					}
				}
			}

		}
	}

    // "ipv4-address": [
    //         {
    //                 "address": "192.168.178.74",
    //                 "mask": 24
    //         }
    // ],
	if (tb[IFSTAT_IPV4])
	{	
		int len = blobmsg_data_len(tb[IFSTAT_IPV4]);
		struct blob_attr* arr = blobmsg_data(tb[IFSTAT_IPV4]);
		struct blob_attr* attr;
		__blob_for_each_attr(attr, arr, len){
			struct blob_attr* tb2[ARRAY_SIZE(ipv4_policy)];
			blobmsg_parse(ipv4_policy, ARRAY_SIZE(ipv4_policy), tb2,
						blobmsg_data(attr), blobmsg_data_len(attr));
			if (tb2[IPV4_ADDR]) {
				ipv4 = blobmsg_get_string(tb2[IPV4_ADDR]);
			}
            if (tb2[IPV4_MASK]) {
				mask = blobmsg_get_u32(tb2[IPV4_MASK]);
			}
		}
	}

	// copy values
	if ((req) && (req->priv))
	{
		t_ubus_ifStatus_param* _param = (t_ubus_ifStatus_param*)req->priv;

		if (_param->cb) _param->cb(ifup, ipv4, mask, defGw, dhcp);
		else{
			strcpy(_param->dev, dev);
			strcpy(_param->ipv4, ipv4);
			strcpy(_param->defGw, defGw);
			strcpy(_param->route, route);
			*_param->ifup = ifup;
			*_param->dhcp = dhcp;
			*_param->mask = mask;
		}
	}
exit:
	LV_LOG_INFO("stat:%s dev:%s ipv4:%s mask:%lu gw:%s route:%s dhcp:%s", ifup ? "UP" : "DOWN", dev, ipv4, mask, defGw, route, dhcp ? "ON" : "OFF");
}

/*** network interface status ***/

static bool ubus_interface_status(const char* name, t_ubus_ifStatus_param* _param)
{
	uint32_t id;
	int ret;
	char idstr[32];

	ret = snprintf(idstr, sizeof(idstr), "network.interface.%s", name);
	if (ret <= 0 || (unsigned int)ret >= sizeof(idstr)) { // error or truncated
		return false;
	}

	ret = ubus_lookup_id(ctx, idstr, &id);
	if (ret) {
		return false;
	}

	ret = ubus_invoke(ctx, id, "status", NULL, ubus_ifStatus_cb, (void*)_param,
					  UBUS_TIMEOUT);
	if (ret < 0) {
		return false;
	}

	// client needs to free(last_result_msg);
	return true;
}

/*** generic result callback: just copies msg to last_result_msg ***/

enum {
	DEVSTAT_UP,
	DEVSTAT_SPEED,
	DEVSTAT_MAC,
	DEVSTAT_DEVTYPE,
	DEVSTAT_MAX
};

static const struct blobmsg_policy devstat_policy[] = {
	[DEVSTAT_UP] = {.name = "up", .type = BLOBMSG_TYPE_BOOL},
	[DEVSTAT_SPEED] = {.name = "speed", .type = BLOBMSG_TYPE_STRING},
	[DEVSTAT_MAC] = {.name = "macaddr", .type = BLOBMSG_TYPE_STRING},
	[DEVSTAT_DEVTYPE] = {.name = "devtype", .type = BLOBMSG_TYPE_STRING},
};


static void ubus_network_device_result_cb (	__attribute__((unused)) struct ubus_request* req,
						   					__attribute__((unused)) int type,
						   					struct blob_attr* msg)
{
	if (!msg) {
		printf("msg NULL\r\n");
		return;
	}

	struct blob_attr* tb[ARRAY_SIZE(devstat_policy)];
	if ( blobmsg_parse(devstat_policy, ARRAY_SIZE(devstat_policy), tb,
				  blob_data(msg), blob_len(msg)) == 0 )
	{
		bool deviceStatusUp = blobmsg_get_bool(tb[DEVSTAT_UP]) ? true : false;
		*((bool*)req->priv) = deviceStatusUp;

		char* devType = blobmsg_get_string(tb[DEVSTAT_DEVTYPE]);
		LV_LOG_INFO("devType:%s status:%s", devType, deviceStatusUp ? "UP" : "DOWN");
	}
}

static struct blob_buf b;

static bool ubus_network_device_status(const char* name, void* priv)
{
	uint32_t id;
	int ret;

	char idstr[64];
	blob_buf_init(&b, 0);


	ret = snprintf(idstr, sizeof(idstr), "{ \"name\" : \"%s\" }", name);
	if (ret <= 0 || (unsigned int)ret >= sizeof(idstr)) { // error or truncated
		return false;
	}else{
		if (!blobmsg_add_json_from_string(&b, idstr))
			printf("error adding json param\r\n");
	}

	ret = ubus_lookup_id(ctx, "network.device", &id);
	if (ret) {
		printf("%s:%d ret:%d -->\r\n", __FUNCTION__, __LINE__, ret);
		return false;
	}

	ret = ubus_invoke(ctx, id, "status", b.head, ubus_network_device_result_cb, priv,
					  UBUS_TIMEOUT);
	if (ret) {
		printf("%s:%d ret:%d\r\n", __FUNCTION__, __LINE__, ret);
		return false;
	}

	return true;
}

/*
 * checks interface is up and default route goes thru it
 *
 * returns: -1 error or not found
 * 	     0 down
 * 	     1 up but no default route
 * 	     2 default route exists
 */

int updateInterfaceStatus(const char* name, bool* _ifup, char* _dev,
 char* _route, char* _defGw, char* _ipv4, unsigned long* _mask, bool* _dhcp )
{
	int ret;

	t_ubus_ifStatus_param _param = {.dev =_dev, .route = _route, .defGw = _defGw, 
									.ipv4 = _ipv4, .mask = _mask, .ifup = _ifup, .dhcp = _dhcp};

	// ubus call network.interface.<iface> status
	ret = ubus_interface_status(name, &_param);
	if (!ret) {
		return -1;
	}
	return ret;
}


/*** network interface status ***/

int updateInterfaceStatusCb(const char* iface, ubus_gui_update_handler_t cb )
{
	int ret; 

	t_ubus_ifStatus_param _param = { .cb=cb };

	// ubus call network.interface.<iface> status
	ret = ubus_interface_status(iface, &_param);
	if (!ret) {
		return -1;
	}
}

static bool concentrator_resolve(char* hostname)
{
	struct addrinfo hints;
	struct addrinfo* addr;

	memset(&hints, 0, sizeof(struct addrinfo));
	hints.ai_family = AF_INET;
	//hints.ai_socktype = pi->conf_proto == ICMP ? SOCK_DGRAM : SOCK_STREAM;
	hints.ai_socktype = SOCK_DGRAM;

	int r = getaddrinfo(hostname, NULL, &hints, &addr);
	if (r < 0 || addr == NULL) {
		LV_LOG_ERROR("Failed to resolve '%s'", hostname);
		return false;
	}

	/* use only first address */
	struct sockaddr_in* sa = (struct sockaddr_in*)addr->ai_addr;
	LV_LOG_INFO("Resolved %s to %s", hostname,
		   inet_ntoa((struct in_addr)sa->sin_addr));
	//pi->conf_host = sa->sin_addr.s_addr;

	freeaddrinfo(addr);
	return true;
}

int updateVpnStatus(ubus_gui_update_vpnstatus_handler_t cb )
{
	bool eth0_up = false, wlan0_up = false, wwan0_up = false;

	// Physical Uplink
	ubus_network_device_status("eth0", (void*)&eth0_up);
	if (!eth0_up)
	{
		ubus_network_device_status("wlan0", (void*)&wlan0_up);
		if (!wlan0_up)
			ubus_network_device_status("wwan0", (void*)&wwan0_up);
	}
	bool _uplink = eth0_up | wlan0_up | wwan0_up;

	char dev[MAX_IFNAME_LEN]  = "";
	char route[MAX_IP_LEN] = "";
	char defGw[MAX_IP_LEN]  = "";
	char ipv4[MAX_IP_LEN]  = "";
    unsigned long mask = 0;
	bool wan_ifup = false, wlan_ifup = false, wwan_ifup = false, ovpn_ifup = false, dhcp = false;
    updateInterfaceStatus("wan", &wan_ifup, dev, route, defGw, ipv4, &mask, &dhcp);
    updateInterfaceStatus("wlan", &wlan_ifup, dev, route, defGw, ipv4, &mask, &dhcp);
    updateInterfaceStatus("wwan", &wwan_ifup, dev, route, defGw, ipv4, &mask, &dhcp);

	bool _ipAddr = wan_ifup | wlan_ifup | wwan_ifup;

	//VPNSTATUS_internet
	bool _internet = false;
	if (concentrator_resolve("concentrators.sevio.it"))
	{
		_internet = true;
	}else if (concentrator_resolve("vpn.sevio.dev"))
	{
		_internet = true;
	}else if (concentrator_resolve("vpn2.sevio.dev"))
	{
		_internet = true;
	}
	
	//VPNSTATUS_vpn
	updateInterfaceStatus("ovpn0", &ovpn_ifup, dev, route, defGw, ipv4, &mask, &dhcp);


	bool _gw = true;

	bool _vpnPorts = ovpn_ifup;
	cb(_uplink, _ipAddr, _gw, _internet, _vpnPorts);

	return 0;
}

// static bool ubus_iwinfo_info(const char* name)
// {
// 	uint32_t id;
// 	int ret;
// 	char idstr[32]="iwinfo";

// 	ret = ubus_lookup_id(ctx, idstr, &id);
// 	if (ret) {
// 		return false;
// 	}

// 	ret = ubus_invoke(ctx, id, "info", NULL, ubus_result_cb, NULL,
// 					  UBUS_TIMEOUT);
// 	if (ret < 0) {
// 		return false;
// 	}

// 	// client needs to free(last_result_msg);
// 	return true;
// }


enum {
	IWINFO_SCAN_SSID,
	IWINFO_SCAN_SIGNAL,
	IWINFO_SCAN_QUALITY,
	IWINFO_SCAN_MAX
};

static const struct blobmsg_policy iwinfoScan_policy[] = {
	[IWINFO_SCAN_SSID] = {.name = "ssid", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_SCAN_SIGNAL] = {.name = "signal", .type = BLOBMSG_TYPE_INT32},
	[IWINFO_SCAN_QUALITY] = {.name = "quality", .type = BLOBMSG_TYPE_INT32},
};

enum {
	IWINFO_SCAN_WIFI_RESULTS,
	IWINFO_SCAN_WIFI_MAX
};

static const struct blobmsg_policy iwinfoScanWifi_policy[IWINFO_SCAN_WIFI_MAX] = {
	[IWINFO_SCAN_WIFI_RESULTS] = {.name = "results", .type = BLOBMSG_TYPE_ARRAY}
};

static void ubus_iwinfo_scan_cb(__attribute__((unused)) struct ubus_request* req,
						   __attribute__((unused)) int type,
						   struct blob_attr* msg)
{
	if (!msg) {
		return;
	}

	printf("%s:%d\r\n", __FUNCTION__, __LINE__);

	struct blob_attr* tb[ARRAY_SIZE(iwinfoScanWifi_policy)];
	blobmsg_parse(iwinfoScanWifi_policy, ARRAY_SIZE(iwinfoScanWifi_policy), tb,
				  blob_data(msg), blob_len(msg));

	if (tb[IWINFO_SCAN_WIFI_RESULTS]) {
		int len = blobmsg_data_len(tb[IWINFO_SCAN_WIFI_RESULTS]);
		struct blob_attr* arr = blobmsg_data(tb[IWINFO_SCAN_WIFI_RESULTS]);

		struct blob_attr* attr;
		__blob_for_each_attr(attr, arr, len)
		{
			char* _ssid; int _signal; int _quality;

			struct blob_attr* tb2[ARRAY_SIZE(iwinfoScan_policy)];
			blobmsg_parse(iwinfoScan_policy, ARRAY_SIZE(iwinfoScan_policy), tb2,
						blobmsg_data(attr), blobmsg_data_len(attr));
			if (tb2[IWINFO_SCAN_SSID]) {
				_ssid = blobmsg_get_string(tb2[IWINFO_SCAN_SSID]);
			}
			if (tb2[IWINFO_SCAN_SIGNAL]) {
				_signal = (int32_t) blobmsg_get_u32(tb2[IWINFO_SCAN_SIGNAL]);
			}

			if (tb2[IWINFO_SCAN_QUALITY]) {
				_quality = (int32_t) blobmsg_get_u32(tb2[IWINFO_SCAN_QUALITY]);
			}
			LV_LOG_INFO("SSID:%s Signal:%d Quality:%d", _ssid, _signal, _quality);
		}
	}
}

static bool ubus_iwinfo_scan(const char* name)
{
	uint32_t id;
	int ret;
	char idstr[32]="{ \"device\" : \"wlan0\" }";

	blob_buf_init(&b, 0);
	if (!blobmsg_add_json_from_string(&b, idstr))
	{
		printf("error adding json param\r\n");
	}

	ret = ubus_lookup_id(ctx, "iwinfo", &id);
	if (ret) {
		return false;
	}

	ret = ubus_invoke(ctx, id, "scan", b.head, ubus_iwinfo_scan_cb, NULL,
					  UBUS_TIMEOUT);
	if (ret < 0) {
		return false;
	}

	// client needs to free(last_result_msg);
	return true;
}

static void ubus_iwinfo_getSignal_cb(__attribute__((unused)) struct ubus_request* req,
						   __attribute__((unused)) int type,
						   struct blob_attr* msg)
{
	if (!msg) {
		return;
	}

	t_ubus_iwinfo_getSignal_param* _param = (t_ubus_iwinfo_getSignal_param*)req->priv;

	struct blob_attr* tb[ARRAY_SIZE(iwinfoScanWifi_policy)];
	blobmsg_parse(iwinfoScanWifi_policy, ARRAY_SIZE(iwinfoScanWifi_policy), tb,
				  blob_data(msg), blob_len(msg));

	if (tb[IWINFO_SCAN_WIFI_RESULTS]) {
		int len = blobmsg_data_len(tb[IWINFO_SCAN_WIFI_RESULTS]);
		struct blob_attr* arr = blobmsg_data(tb[IWINFO_SCAN_WIFI_RESULTS]);

		struct blob_attr* attr;
		__blob_for_each_attr(attr, arr, len)
		{
			struct blob_attr* tb2[ARRAY_SIZE(iwinfoScan_policy)];
			blobmsg_parse(iwinfoScan_policy, ARRAY_SIZE(iwinfoScan_policy), tb2,
						blobmsg_data(attr), blobmsg_data_len(attr));

			if (tb2[IWINFO_SCAN_SSID]) {
				char* _ssid = blobmsg_get_string(tb2[IWINFO_SCAN_SSID]);
				int _signal = 0;
				if ((_ssid != NULL ) && (strcmp(_ssid, _param->_ssid) == 0)) {
					if (tb2[IWINFO_SCAN_SIGNAL]) {
						_signal = (int32_t) blobmsg_get_u32(tb2[IWINFO_SCAN_SIGNAL]);
						_param->cb(false, _signal);
					}
				}
				LV_LOG_INFO("SSID:%s Signal:%d", _ssid, _signal);
			}
		}
	}
}




bool updateWiFiSignal(t_ubus_iwinfo_getSignal_param* _param)
{
	uint32_t id;
	int ret;
	char idstr[32]="{ \"device\" : \"wlan0\" }";

	blob_buf_init(&b, 0);
	if (!blobmsg_add_json_from_string(&b, idstr)) {
		printf("error adding json param\r\n");
	}

	ret = ubus_lookup_id(ctx, "iwinfo", &id);
	if (ret) {
		return false;
	}

	ret = ubus_invoke(ctx, id, "scan", b.head, ubus_iwinfo_getSignal_cb, _param,
					  UBUS_TIMEOUT);
	if (ret < 0) {
		return false;
	}

	return true;
}

/*** init / finish ***/

bool ubus_init(void)
{
	ctx = ubus_connect(NULL);
	if (!ctx) {
		printf("Failed to connect to ubus");
		return false;
	}
	return true;
}

void ubus_finish(void)
{
	if (ctx == NULL) {
		return;
	}

	//ubus_remove_object(ctx, &server_object);
	ubus_free(ctx);
}

#else
#include "stdlib.h"
#include "stdio.h"
#include "ubus.h"

// Stub functions

int updateInterfaceStatus(const char* iface, ubus_gui_update_handler_t cb )
{
	return 0;
}

bool randomState()
{
	int num = rand();
	if (num < RAND_MAX/2) return false;
	return true;
}

int updateVpnStatus(ubus_gui_update_vpnstatus_handler_t cb )
{
	cb(randomState(), randomState(), randomState(), randomState(), randomState());
	return 0;
}

bool ubus_init(void)
{}

void ubus_finish(void)
{}

#endif