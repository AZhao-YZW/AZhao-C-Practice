#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "global.h"

// 第1个月
int is_car(u32 type)
{
    if (type >= CAR_A && type <= CAR_C) {
        return 1;
    } else {
        return 0;
    }
}

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

void produce_cars(struct s_toy *toy)
{
    switch (toy->type)
    {
    case CAR_A:
        printf("produce Car A, color is %s, size is %u\n", get_car_color(toy), toy->car.size);
        break;
    case CAR_B:
        printf("produce Car B, color is %s, size is %u\n", get_car_color(toy), toy->car.size);
        break;
    case CAR_C:
        printf("produce Car C, color is %s, size is %u\n", get_car_color(toy), toy->car.size);
        break;
    default:
        break;
    }
}

// 第2个月
int is_dog(u32 type)
{
    if (type >= DOG_A && type <= DOG_C) {
        return 1;
    } else {
        return 0;
    }
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

void produce_dogs(struct s_toy *toy)
{
    switch (toy->type)
    {
    case DOG_A:
        printf("produce Dog A, breed is %s, gender is %s\n", get_dog_breed(toy), get_dog_gender(toy));
        break;
    case DOG_B:
        printf("produce Dog B, breed is %s, gender is %s\n", get_dog_breed(toy), get_dog_gender(toy));
        break;
    case DOG_C:
        printf("produce Dog C, breed is %s, gender is %s\n", get_dog_breed(toy), get_dog_gender(toy));
        break;
    default:
        break;
    }
}

void produce_toys(struct s_toy *toy)
{
    if (is_car(toy->type)) {
        produce_cars(toy);
    } else if (is_dog(toy->type)) {
        produce_dogs(toy);
    } else {
        printf("can't produce this product.\n");
    }
}