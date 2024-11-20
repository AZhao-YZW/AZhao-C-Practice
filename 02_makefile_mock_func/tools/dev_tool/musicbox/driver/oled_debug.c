#include <stdio.h>
#include "oled.h"

void oled_show_text(char *text)
{
    DEV_PRINT("oled_show_text, text[%s]\n", text);
}

void oled_show_picture(char *picture)
{
    DEV_PRINT("oled_show_picture, picture[%s]\n", picture);
}

void oled_test(void)
{
    DEV_PRINT("oled show text test:\n");
    DEV_PRINT("\t");
    oled_show_text("Hello,");
    oled_show_text("this");
    oled_show_text("is");
    oled_show_text("MusicBox.");

    DEV_PRINT("oled show picture test:\n");
    DEV_PRINT("\t");
    oled_show_picture("Hello,");
    oled_show_picture("this");
    oled_show_picture("is");
    oled_show_picture("MusicBox.");
}