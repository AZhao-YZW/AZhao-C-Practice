#include <stdio.h>

void oled_show_text(char *text)
{
    printf("oled_show_text, text[%s]\n", text);
}

void oled_show_picture(char *picture)
{
    printf("oled_show_picture, picture[%s]\n", picture);
}

void oled_on(void)
{
    printf("oled_on\n");
}

void oled_off(void)
{
    printf("oled_off\n");
}