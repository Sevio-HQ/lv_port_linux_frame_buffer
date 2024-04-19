#ifndef UCI_INT_H
#define UCI_INT_H

int uci_config_getServiceTag(char* _serviceTag);

int uci_config_getLanDhcpServer();

int uci_config_getModemInfo(char* lockFile, char* modemTty);

int uci_config_getWifiMode(char* _mode, bool* _hidden, char* _ssid, bool* _disabled);

int uci_config_isWifiDisabled(bool* _wifiDis);

int uci_config_isWifiStaMode(bool* _wifiSta);

bool uci_config_set_pingcheck(char* ifname);

int uci_config_getAPN(char* _apn, bool* _wwanDis);

bool getConcentratorAndCheck();

#endif