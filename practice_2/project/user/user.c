#include <stdio.h>
#include "music.h"
#include "network.h"
#include "settings.h"

int main()
{
    // powerup and init
    printf("powerup and init\n");

    // music function
    music_start();
    music_volume_up();
    music_volume_down();
    music_front();
    music_next();
    music_stop();
    music_restart();

    // network function
    network_on();
    network_off();

    // settings function
    set_voice_bluetooth();
    set_voice_speaker();

    // end
    printf("end\n");

    return 0;
}