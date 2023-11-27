#include <stdio.h>
#include "wifi.h"

void network_on(void)
{
    printf("network_on\n");
    menu_ok();
    wifi_connect();
}

void network_off(void)
{
    printf("network_off\n");
    menu_ok();
    wifi_disconnect();
}