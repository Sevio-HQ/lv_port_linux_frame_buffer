#ifndef UBUS_H
#define UBUS_H

#include <stdbool.h>

typedef void (*ubus_gui_update_handler_t)(bool _ifup, const char* _ip,
				    unsigned int _mask, const char* _gw);

int updateInterfaceStatus(const char* iface, ubus_gui_update_handler_t cb);

#endif