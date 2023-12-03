#include "music.h"
#include <stdio.h>
#include "menu.h"
#include "audio_core.h"

static void music_general_action(char *op, unsigned int menu_opcode, unsigned int audio_opcode)
{
    printf("%s\n", op);
    printf("\t");
    menu_option(menu_opcode);
    printf("\t");
    audio_option(audio_opcode);
}

static void music_start(void)
{
    music_general_action("music_start", MENU_OK, AUDIO_START);
}

static void music_stop(void)
{
    music_general_action("music_stop", MENU_OK, AUDIO_STOP);
}

static void music_restart(void)
{
    music_general_action("music_restart", MENU_OK, AUDIO_RESTART);
}

static void music_front(void)
{
    music_general_action("music_front", MENU_LEFT, AUDIO_FRONT);
}

static void music_next(void)
{
    music_general_action("music_next", MENU_RIGHT, AUDIO_NEXT);
}

static void music_volume_up(void)
{
    music_general_action("music_volume_up", MENU_UP, AUDIO_VOLUME_UP);
}

static void music_volume_down(void)
{
    music_general_action("music_volume_down", MENU_DOWN, AUDIO_VOLUME_DOWN);
}

typedef void (*music_option_func)(void);

static music_option_func g_music_option_list[] = {
    music_start,        // MUSIC_START
    music_stop,         // MUSIC_STOP
    music_restart,      // MUSIC_RESTART
    music_front,        // MUSIC_FRONT
    music_next,         // MUSIC_NEXT
    music_volume_up,    // MUSIC_VOLUME_UP
    music_volume_down,  // MUSIC_VOLUME_DOWN
};

void music_option(unsigned int opcode)
{
    if (opcode > MUSIC_VOLUME_DOWN) {
        printf("**error**: music opcode out of range.\n");
        return;
    }
    g_music_option_list[opcode]();
}