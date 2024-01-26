#ifdef LIBUBUS
#include <libubus.h>
//#include <libubox.h>
#include <unistd.h>
#include "lvgl/lvgl.h"
#include "libubox/blob.h"
#include "ubus.h"

#define MAX_IFNAME_LEN	   256
#define UBUS_TIMEOUT	   3000 /* 3 sec */

static struct ubus_context* ctx;

/*** network interface events ***/

static struct ubus_event_handler interface_event_handler;

enum {
	IFSTAT_UP,
	IFSTAT_DEVICE,
	IFSTAT_L3DEVICE,
	IFSTAT_ROUTE,
	IFSTAT_TARGET,
    IFSTAT_IPV4,
};

static const struct blobmsg_policy ifstat_policy[] = {
	[IFSTAT_UP] = {.name = "up", .type = BLOBMSG_TYPE_BOOL},
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

static struct blob_attr* last_result_msg;

static void ubus_result_cb(__attribute__((unused)) struct ubus_request* req,
						   __attribute__((unused)) int type,
						   struct blob_attr* msg)
{
	if (!msg) {
		return;
	}

	unsigned int len = blob_raw_len(msg);
	last_result_msg = malloc(len);
	memcpy(last_result_msg, msg, len);
	// client needs to free(last_result_msg);
    //LV_LOG_INFO("len:%d", len);
}

/*** network interface status ***/

static bool ubus_interface_status(const char* name)
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

	ret = ubus_invoke(ctx, id, "status", NULL, ubus_result_cb, NULL,
					  UBUS_TIMEOUT);
	if (ret < 0) {
		return false;
	}

	// client needs to free(last_result_msg);
	return true;
}

static const struct blobmsg_policy iwinfo_policy[] = {
	[IWINFO_SSID] = {.name = "ssid", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_BSSID] = {.name = "bssid", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_MODE] = {.name = "mode", .type = BLOBMSG_TYPE_STRING},
	[IWINFO_CH] = {.name = "channel", .type = BLOBMSG_TYPE_INT32},
};


/*** generic result callback: just copies msg to last_result_msg ***/

static void ubus_network_device_result_cb	__attribute__((unused)) struct ubus_request* req,
						   					__attribute__((unused)) int type,
						   					struct blob_attr* msg)
{
	if (!msg) {
		return;
	}
	
	static const struct blobmsg_policy policy = { "up", BLOBMSG_TYPE_STRING };
	struct blob_attr *cur;

	blobmsg_parse(&policy, 1, &cur, blob_data(msg), blob_len(msg));
	if (cur)
		
		bool deviceStatusUp = (strcmp(blobmsg_get_string(cur), "up") == 0);
		*req->priv = deviceStatusUp;
		printf("Received status up:%s %d", blobmsg_get_string(cur), deviceStatusUp);
	}
}

static bool ubus_network_device_status(const char* name, void* priv)
{
	uint32_t id;
	int ret;

	char idstr[32];

	ret = snprintf(idstr, sizeof(idstr), "network.device status '{ "name" : ""%s"" }' ", name);
	if (ret <= 0 || (unsigned int)ret >= sizeof(idstr)) { // error or truncated
		return false;
	}

	ret = ubus_lookup_id(ctx, netowrk.device, &id);
	if (ret) {
		return false;
	}

	ret = ubus_invoke(ctx, id, idstr, NULL, ubus_network_device_result_cb, priv,
					  UBUS_TIMEOUT);
	if (ret < 0) {
		return false;
	}

	// client needs to free(last_result_msg);
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
int ubus_interface_get_status(const char* name, ubus_gui_update_handler_t cb)
{
	int ret;
	char device[MAX_IFNAME_LEN]="";
	const char* dev = "";
	const char* route = "";
	const char* defGw = "";
	const char* ipv4 = "";
    unsigned long mask = 0;
	bool ifup = false;

// ubus call network.interface.wan status
	ret = ubus_interface_status(name);
	if (!ret) {
		return -1;
	}

	struct blob_attr* tb[ARRAY_SIZE(ifstat_policy)];
	blobmsg_parse(ifstat_policy, ARRAY_SIZE(ifstat_policy), tb,
				  blob_data(last_result_msg), blob_len(last_result_msg));

	// up
	// if (!tb[IFSTAT_UP]) {
	// 	ret = -1;
	// 	goto exit; // error
	// }
	// if (!blobmsg_get_bool(tb[IFSTAT_UP])) {
	// 	ret = 0;
	// 	LV_LOG_INFO("Interface DOWN"));
	// 	goto exit; // down
	// }
		
	ifup = blobmsg_get_bool(tb[IFSTAT_UP]) ? true : false;

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
		LV_LOG_ERROR("ubus_interface_get_status: device_len too short");
		ret = -1;
		goto exit; // error
	}
	strcpy(device, dev);

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

exit:
	LV_LOG_INFO("stat:%s dev:%s ipv4:%s mask:%lu gw:%s", ifup ? "UP" : "DOWN", device, ipv4, mask, defGw);
	if (cb != NULL)
	{		
		cb(ifup, ipv4, mask, defGw);
	}
	free(last_result_msg);
	last_result_msg = NULL;
	return ret;
}


/*** network interface status ***/

static bool ubus_iwinfo_info(const char* name)
{
	uint32_t id;
	int ret;
	char idstr[32]="iwinfo";

	// ret = snprintf(idstr, sizeof(idstr), "network.interface.%s", name);
	// if (ret <= 0 || (unsigned int)ret >= sizeof(idstr)) { // error or truncated
	// 	return false;
	// }

	ret = ubus_lookup_id(ctx, idstr, &id);
	if (ret) {
		return false;
	}

	ret = ubus_invoke(ctx, id, "info", NULL, ubus_result_cb, NULL,
					  UBUS_TIMEOUT);
	if (ret < 0) {
		return false;
	}

	// client needs to free(last_result_msg);
	return true;
}


int updateInterfaceStatus(const char* iface, ubus_gui_update_handler_t cb )
{
    #ifdef LIBUBUS

	const char *ubus_socket = NULL;

	int ret = uloop_init();
	if (ret < 0) {
		LV_LOG_ERROR("Could not initialize uloop");
		return EXIT_FAILURE;
	}

	ctx = ubus_connect(ubus_socket);
	if (!ctx) {
		LV_LOG_ERROR("Failed to connect to ubus\n");
		return EXIT_FAILURE;
	}

	ubus_add_uloop(ctx);

    ubus_interface_get_status(iface, cb);
    // ubus_interface_get_status("lan", device, MAX_IFNAME_LEN);
	// ubus_interface_get_status("wlan", device, MAX_IFNAME_LEN);
    // ubus_interface_get_status("wan", device, MAX_IFNAME_LEN);
    // ubus_interface_get_status("ovpn0", device, MAX_IFNAME_LEN);

	ubus_free(ctx);
	uloop_done();
    #endif
}

int updateVpnStatus(ubus_gui_update_vpnstatus_handler_t cb )
{
	bool eth0_up = false, wlan0_up = false, wwan0_up = false;
	ubus_network_device_status("eth0", (void*)&eth0_up);
	ubus_network_device_status("wlan0", (void*)&wlan0_up);
	ubus_network_device_status("wwan0", (void*)&wwan0_up);

	bool _uplink = eth0_up | wlan0_up | wwan0_up;
	cb(_uplink, randomState(), randomState(), randomState(), randomState());
	return 0;
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

#endif