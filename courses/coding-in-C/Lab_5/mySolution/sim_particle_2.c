/*
 * File: sim_particle_2.c
 * Description: Program to simulate the horizontal movement and collision of particles
 */

#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "sim_head.h"

int main() {
    
    enum {LENGTH = 10};
    int sim_array [LENGTH] = {0};
    int temp_array [LENGTH] = {0};
    int *p_sim_array = sim_array;
    int *p_temp_array = temp_array;

    //set particle(1) by index 2,4,6
    set_particle(sim_array);

    srand(time(NULL));
    int random = 0;

    for (int i = 0; i < 5; i++){
        printf("Time %d: ", i);

        for (int j= 0; j < LENGTH; j++) {
        printf("%d ", sim_array[j]);
        }
        printf("\n\n");

        for (int j= 0; j < LENGTH; j++) {

            if (*(p_sim_array + j) == 1){
                random = rand() % 2;        // create random number 0 or 1
                random = random * 2 - 1;    // change in -1 or 1
                
                // set border
                switch (j)  
                {
                case 0:
                    random = 1;
                    break;
                case LENGTH - 1:
                    random = -1;
                    break;
                default:
                    break;
                }

                //set particles
                *(p_temp_array + j + random) += 1;
            }   
        }

        //check collision
        for (int i = 0; i < LENGTH; i++) {
            if (*(p_temp_array + i) > 1){
                printf("Collision on index %d\n\n", i); 
                *(p_temp_array + i) = 0;   
            }
        }

        // clone temp_array and set it to 0
        for (int j = 0; j < LENGTH; j++) {
            p_sim_array[j] = p_temp_array[j];
            *(p_temp_array + j) = 0;
        }

    }
    return 0;
}