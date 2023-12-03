#ifndef _MENU_H
#define _MENU_H

enum e_menu_opcode {
    MENU_OK = 0,
    MENU_BACK,
    MENU_UP,
    MENU_DOWN,
    MENU_LEFT,
    MENU_RIGHT
};

void menu_option(unsigned int opcode);

#endif