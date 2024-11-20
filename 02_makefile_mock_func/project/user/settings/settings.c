#include <stdio.h>
#include "menu.h"
#include "bluetooth.h"

void set_voice_bluetooth(void)
{
    printf("set_voice_bluetooth\n");
    printf("\t");
    menu_option(MENU_OK);
    printf("\t");
    bluetooth_connect();
}

void set_voice_speaker(void)
{
    printf("set_voice_speaker\n");
    printf("\t");
    menu_option(MENU_OK);
    printf("\t");
    bluetooth_disconnect();
}