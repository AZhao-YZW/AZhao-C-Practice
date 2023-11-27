#include <stdio.h>
#include "bluetooth.h"

void set_voice_bluetooth(void)
{
    printf("set_voice_bluetooth\n");
    menu_ok();
    bluetooth_connect();
}

void set_voice_speaker(void)
{
    printf("set_voice_speaker\n");
    menu_ok();
    bluetooth_disconnect();
}