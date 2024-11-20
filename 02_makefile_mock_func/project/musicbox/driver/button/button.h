#ifndef _BUTTON_H
#define _BUTTON_H

enum e_btn {
    BTN_OK = 0,
    BTN_BACK,
    BTN_UP,
    BTN_DOWN,
    BTN_LEFT,
    BTN_RIGHT
};

void button_click(int num);

#endif