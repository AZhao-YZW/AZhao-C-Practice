#include <stdio.h>
#include "audio_core.h"

void music_start(void)
{
    printf("music_start\n");
    menu_ok();
    audio_start();
}

void music_stop(void)
{
    printf("music_stop\n");
    menu_ok();
    audio_start();
}

void music_restart(void)
{
    printf("music_restart\n");
    menu_ok();
    audio_start();
}

void music_front(void)
{
    printf("music_front\n");
    menu_left();
    audio_start();
}

void music_next(void)
{
    printf("music_next\n");
    menu_right();
    audio_start();
}

void music_volume_up(void)
{
    printf("music_volume_up\n");
    menu_up();
    audio_start();
}

void music_volume_down(void)
{
    printf("music_volume_down\n");
    menu_down();
    audio_start();
}