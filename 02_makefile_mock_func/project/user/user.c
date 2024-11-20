#include <stdio.h>
#include "music.h"
#include "network.h"
#include "settings.h"

int main()
{
    // powerup and init
    printf("*************** powerup and init ***************\n");

    // music function
    printf(">>>>>>>>>> music function test <<<<<<<<<<\n");
    music_option(MUSIC_START);
    music_option(MUSIC_VOLUME_UP);
    music_option(MUSIC_VOLUME_DOWN);
    music_option(MUSIC_FRONT);
    music_option(MUSIC_NEXT);
    music_option(MUSIC_STOP);
    music_option(MUSIC_RESTART);

    // network function
    printf("\n>>>>>>>>>> network function test <<<<<<<<<<\n");
    network_on();
    network_off();

    // settings function
    printf("\n>>>>>>>>>> settings function test <<<<<<<<<<\n");
    set_voice_bluetooth();
    set_voice_speaker();

    // end
    printf("********************* end *********************\n");

    return 0;
}