/*
 * File: sction_2.c
 * Description: train with struct
*/

#include <stdio.h>
#include <string.h>

struct car
{
    float fuel_level;
    float max_fuel_level;
    char model[20];
} car;

void refuel(float fuel, struct car *c) {
    if(fuel + c->fuel_level < c->max_fuel_level) {
        c->fuel_level =+ c->fuel_level + fuel;
        printf("%s fuel level: %.2f\n", c->model, c->fuel_level);
    } else {
        printf("cannot refuel %s\n", c->model);
    }
}



int main() {

    struct car c1;
    struct car c2 = {20, 120, "Mercedes"};
    
    c1.fuel_level = 20;
    c1.max_fuel_level = 100;
    strcpy(c1.model, "Golf 7");

    printf("Car1 fuel level: %.2f\n", c1.fuel_level);
    printf("Car1 max fuel level: %.2f\n", c1.max_fuel_level);
    printf("Car1 1model: %s\n", c1.model);
    printf("\n");

    printf("Car2 fuel level: %.2f\n", c2.fuel_level);
    printf("Car2 max fuel level: %.2f\n", c2.max_fuel_level);
    printf("Car2 1model: %s\n", c2.model);

    float fuel = 90;

    refuel(fuel, &c1);
    refuel(fuel, &c2);

    return  0;
}