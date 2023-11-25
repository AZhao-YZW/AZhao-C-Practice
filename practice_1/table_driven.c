#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"

typedef void (*produce_toy_func)(struct s_toy *toy);

char *get_car_color(struct s_toy *toy)
{
    char *str = (char *)malloc(sizeof(char) * 15);

    switch (toy->car.color)
    {
    case WHITE:
        strcpy_s(str, 15, "white");
        return str;
    case BLUE:
        strcpy_s(str, 15, "blue");
        return str;
    case BLACK:
        strcpy_s(str, 15, "black");
        return str;
    default:
        return str;
    }
}

void produce_car_a(struct s_toy *toy)
{
    printf("produce Car A, color is %s, size is %u\n", get_car_color(toy), toy->car.size);
}

void produce_car_b(struct s_toy *toy)
{
    printf("produce Car B, color is %s, size is %u\n", get_car_color(toy), toy->car.size);
}

void produce_car_c(struct s_toy *toy)
{
    printf("produce Car C, color is %s, size is %u\n", get_car_color(toy), toy->car.size);
}

char *get_dog_breed(struct s_toy *toy)
{
    char *str = (char *)malloc(sizeof(char) * 20);

    switch (toy->dog.breed)
    {
    case POODLE:
        strcpy_s(str, 20, "poodle");
        return str;
    case BORDER_COLLIE:
        strcpy_s(str, 20, "border collie");
        return str;
    case LABRADOR:
        strcpy_s(str, 20, "labrador");
        return str;
    default:
        return str;
    }
}

char *get_dog_gender(struct s_toy *toy)
{
    char *str = (char *)malloc(sizeof(char) * 10);

    switch (toy->dog.gender)
    {
    case MALE:
        strcpy_s(str, 10, "male");
        return str;
    case FEMALE:
        strcpy_s(str, 10, "female");
        return str;
    default:
        return str;
    }
}

void produce_dog_a(struct s_toy *toy)
{
    printf("produce Dog A, breed is %s, gender is %s\n", get_dog_breed(toy), get_dog_gender(toy));
}

void produce_dog_b(struct s_toy *toy)
{
    printf("produce Dog B, breed is %s, gender is %s\n", get_dog_breed(toy), get_dog_gender(toy));
}

void produce_dog_c(struct s_toy *toy)
{
    printf("produce Dog C, breed is %s, gender is %s\n", get_dog_breed(toy), get_dog_gender(toy));
}

static produce_toy_func g_produce_toy_table[] = {
    produce_car_a,      // CAR_A
    produce_car_b,      // CAR_B
    produce_car_c,      // CAR_C
    produce_dog_a,      // DOG_A
    produce_dog_b,      // DOG_B
    produce_dog_c,      // DOG_C
};

void produce_toys(struct s_toy *toy)
{
    if (toy->type > DOG_C) {
        printf("can't produce this product.\n");
    }

    g_produce_toy_table[toy->type](toy);
}