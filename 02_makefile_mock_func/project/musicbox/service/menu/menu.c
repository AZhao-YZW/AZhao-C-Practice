#include "menu.h"
#include <stdio.h>
#include "button.h"
#include "oled.h"

static void menu_general_action(char *op, unsigned int btn, char *oled_text)
{
    printf("%s\n", op);
    printf("\t\t");
    button_click(btn);
    printf("\t\t");
    oled_show_text(oled_text);
}

static void menu_ok(void)
{
    menu_general_action("menu_ok", BTN_OK, "ok");
}

static void menu_back(void)
{
    menu_general_action("menu_back", BTN_BACK, "back");
}

static void menu_up(void)
{
    menu_general_action("menu_up", BTN_UP, "up");
}

static void menu_down(void)
{
    menu_general_action("menu_down", BTN_DOWN, "down");
}

static void menu_left(void)
{
    menu_general_action("menu_left", BTN_LEFT, "left");
}

static void menu_right(void)
{
    menu_general_action("menu_right", BTN_RIGHT, "right");
}

typedef void (*menu_option_func)(void);

static menu_option_func g_menu_option_list[] = {
    menu_ok,        // MENU_OK
    menu_back,      // MENU_BACK
    menu_up,        // MENU_UP
    menu_down,      // MENU_DOWN
    menu_left,      // MENU_LEFT
    menu_right,     // MENU_RIGHT
};

void menu_option(unsigned int opcode)
{
    if (opcode > MENU_RIGHT) {
        printf("**error**: menu opcode out of range.\n");
        return;
    }
    g_menu_option_list[opcode]();
}