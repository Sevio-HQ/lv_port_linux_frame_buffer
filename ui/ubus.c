#ifdef LIBUBUS
#include <libubus.h>
//#include <libubox.h>
#include <unistd.h>
#include "lvgl/lvgl.h"
#include "libubox/blob.h"

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
	IPV4_ADDR,
	IPV4_MASK,
};

static const struct blobmsg_policy ipv4_policy[] = {
	[IPV4_ADDR] = {.name = "address", .type = BLOBMSG_TYPE_STRING},
	[IPV4_MASK] = {.name = "mask", .type = BLOBMSG_TYPE_INT32},
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

/*
 * checks interface is up and default route goes thru it
 *
 * returns: -1 error or not found
 * 	     0 down
 * 	     1 up but no default route
 * 	     2 default route exists
 */
int ubus_interface_get_status(const char* name, char* device, size_t device_len)
{
	int ret;
	const char* dev = "";
	const char* route = "";
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
	if (strlen(dev) >= device_len) {
		LV_LOG_ERROR("ubus_interface_get_status: device_len too short");
		ret = -1;
		goto exit; // error
	}
	strcpy(device, dev);

	// routes
	// if (!tb[IFSTAT_ROUTE]) {
	// 	ret = 1;
	// 	goto exit; // up, no route
	// }
	
    // {
	// 	int len = blobmsg_data_len(tb[IFSTAT_ROUTE]);
	// 	struct blob_attr* arr = blobmsg_data(tb[IFSTAT_ROUTE]);
	// 	struct blob_attr* attr;
	// 	__blob_for_each_attr(attr, arr, len)
	// 	{
	// 		struct blob_attr* tb2[ARRAY_SIZE(route_policy)];
	// 		blobmsg_parse(route_policy, ARRAY_SIZE(route_policy), tb2,
	// 					blobmsg_data(attr), blobmsg_data_len(attr));
	// 		if (tb2[ROUTE_TARGET]) {
	// 			route = blobmsg_get_string(tb2[ROUTE_TARGET]);
	// 			if (route != NULL && strcmp(route, "0.0.0.0") == 0) {
	// 				ret = 2;
	// 				goto exit; // default route found
	// 			}
	// 		}
	// 	}
	// }

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

	LV_LOG_INFO("stat:%s dev:%s ipv4:%s mask:%d", ifup ? "UP" : "DOWN", device, ipv4, mask);
exit:
	free(last_result_msg);
	last_result_msg = NULL;
	return ret;
}



void updateInterfaceStatus()
{
    #ifdef LIBUBUS
    char device[MAX_IFNAME_LEN];
	const char *ubus_socket = NULL;

	uloop_init();
	ctx = ubus_connect(ubus_socket);
	if (!ctx) {
		fprintf(stderr, "Failed to connect to ubus\n");
		return;
	}
	ubus_add_uloop(ctx);

    ubus_interface_get_status("lan", device, MAX_IFNAME_LEN);
	ubus_interface_get_status("wlan", device, MAX_IFNAME_LEN);
    ubus_interface_get_status("wan", device, MAX_IFNAME_LEN);

	ubus_free(ctx);
	uloop_done();
    #endif
}
#endif