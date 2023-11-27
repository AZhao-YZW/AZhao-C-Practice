#include <stdio.h>
#include "button.h"
#include "oled.h"

void menu_ok(void)
{
    printf("menu_ok\n");
    button_click(BTN_OK);
    oled_show_text("ok");
}

void menu_back(void)
{
    printf("menu_back\n");
    button_click(BTN_BACK);
    oled_show_text("back");
}

void menu_up(void)
{
    printf("menu_up\n");
    button_click(BTN_UP);
    oled_show_text("up");
}

void menu_down(void)
{
    printf("menu_down\n");
    button_click(BTN_DOWN);
    oled_show_text("down");
}

void menu_left(void)
{
    printf("menu_left\n");
    button_click(BTN_LEFT);
    oled_show_text("left");
}

void menu_right(void)
{
    printf("menu_right\n");
    button_click(BTN_RIGHT);
    oled_show_text("right");
}