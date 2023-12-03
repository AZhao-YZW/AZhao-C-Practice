#ifndef _MUSIC_H
#define _MUSIC_H

enum e_music_opcode {
    MUSIC_START = 0,
    MUSIC_STOP,
    MUSIC_RESTART,
    MUSIC_FRONT,
    MUSIC_NEXT,
    MUSIC_VOLUME_UP,
    MUSIC_VOLUME_DOWN,
};

void music_option(unsigned int opcode);

#endif