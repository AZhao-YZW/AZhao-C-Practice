#ifndef _GLOBAL_H
#define _GLOBAL_H

#ifdef _WIN64
#include "types.h"
#else
#error program must run in win64 platform
#endif

enum e_toys {
    CAR_A = 0,
    CAR_B,
    CAR_C,
    DOG_A,
    DOG_B,
    DOG_C
};

enum e_car_color {
    WHITE = 0,
    BLUE,
    BLACK
};

enum e_dog_breed {
    POODLE = 0,
    BORDER_COLLIE,
    LABRADOR
};

enum e_dog_gender {
    MALE = 0,
    FEMALE
};

struct s_car {
    u32 color;
    u32 size;
};

struct s_dog {
    u32 breed;
    u8 gender;
};

struct s_toy {
    u32 type;
    struct s_car car;
    struct s_dog dog;
};

#endif