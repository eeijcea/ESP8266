#ifndef CGIWIFI_H
#define CGIWIFI_H

#include "httpd/httpd.h"

int cgiWiFiScan(HttpdConnData *connData);
void tplWlan(HttpdConnData *connData, char *token, void **arg);
int cgiWiFi(HttpdConnData *connData);
int cgiWiFiConnect(HttpdConnData *connData);

#endif