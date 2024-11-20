#include <stdio.h>
#include "global.h"

/**
 * 2个玩具工厂生产玩具，它们分别为:
 *  (1) switch_case工厂(SC)
 *  (2) table_enum工厂(TE)
 * 
 * 1. 第1个月，市场上流行玩具车，2个工厂都顺利生产了出来A,B,C这3种
 * 
 * 2. 第2个月，市场上流行玩具狗，2个工厂也都顺利生产了出来A,B,C这3种
 * 
 * 3. 第3个月，为了提高竞争力，工厂生产的每种玩具车都要提供更多样的颜色、大小，
 *    每种玩具狗也要提供狗的种类和性别
 */

extern void produce_toys(struct s_toy *toy);

int main()
{
    struct s_toy toy;

    toy.type = CAR_A;
    toy.car.color = WHITE;
    toy.car.size = 30;
    produce_toys(&toy);
    toy.type = CAR_B;
    toy.car.color = BLUE;
    toy.car.size = 20;
    produce_toys(&toy);
    toy.type = CAR_C;
    toy.car.color = BLACK;
    toy.car.size = 25;
    produce_toys(&toy);

    toy.type = DOG_A;
    toy.dog.breed = LABRADOR;
    toy.dog.gender = MALE;
    produce_toys(&toy);
    toy.type = DOG_B;
    toy.dog.breed = POODLE;
    toy.dog.gender = MALE;
    produce_toys(&toy);
    toy.type = DOG_C;
    toy.dog.breed = BORDER_COLLIE;
    toy.dog.gender = FEMALE;
    produce_toys(&toy);

    return 0;
}