#include <stdio.h>
#include "menu.h"
#include "wifi.h"

void network_on(void)
{
    printf("network_on\n");
    printf("\t");
    menu_option(MENU_OK);
    printf("\t");
    wifi_connect();
}

void network_off(void)
{
    printf("network_off\n");
    printf("\t");
    menu_option(MENU_OK);
    printf("\t");
    wifi_disconnect();
}