#include "audio_core.h"
#include <stdio.h>

static void audio_general_action(char *op)
{
    printf("%s\n", op);
}

static void audio_start(void)
{
    audio_general_action("audio_start");
}

static void audio_stop(void)
{
    audio_general_action("audio_stop");
}

static void audio_restart(void)
{
    audio_general_action("audio_restart");
}

static void audio_front(void)
{
    audio_general_action("audio_front");
}

static void audio_next(void)
{
    audio_general_action("audio_next");
}

static void audio_volume_up(void)
{
    audio_general_action("audio_volume_up");
}

static void audio_volume_down(void)
{
    audio_general_action("audio_volume_down");
}

// repair
static void audio_core_repair(void)
{
    audio_general_action("audio_core_repair");
}

typedef void (*audio_option_func)(void);

static audio_option_func g_audio_option_list[] = {
    audio_start,        // AUDIO_START
    audio_stop,         // AUDIO_STOP
    audio_restart,      // AUDIO_RESTART
    audio_front,        // AUDIO_FRONT
    audio_next,         // AUDIO_NEXT
    audio_volume_up,    // AUDIO_VOLUME_UP
    audio_volume_down,  // AUDIO_VOLUME_DOWN
    // repair
    audio_core_repair,  // AUDIO_REPAIR
};

void audio_option(unsigned int opcode)
{
    if (opcode > AUDIO_VOLUME_DOWN) {
        printf("**error**: audio opcode out of range.\n");
        return;
    }
    g_audio_option_list[opcode]();
}