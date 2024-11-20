#ifndef _AUDIO_CORE_H
#define _AUDIO_CORE_H

enum e_audio_opcode {
    AUDIO_START = 0,
    AUDIO_STOP,
    AUDIO_RESTART,
    AUDIO_FRONT,
    AUDIO_NEXT,
    AUDIO_VOLUME_UP,
    AUDIO_VOLUME_DOWN,
    // repair
    AUDIO_REPAIR
};

void audio_option(unsigned int opcode);

#endif