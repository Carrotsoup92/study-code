/*
 * File: sim_particle.c
 * Description: Train with pointers
 */

#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    enum {LENGTH = 10};
    int sim_array [LENGTH] = {0};
    int temp_array [LENGTH] = {0};
    int *p_sim_array = sim_array;
    int *p_temp_array = temp_array;

    //set particle(1) by index 2,4,6
    int particle = 2; 
    for (int i = 0; i < 3; i++){    
        sim_array[particle] = 1;
        particle += 2;
    }

    //clone array
    for (int i = 0; i < LENGTH; i++) {  
        p_temp_array[i] = p_sim_array[i];
    }

    srand(time(NULL));
    int random = 0;

    for (int i = 0; i < 5; i++){
        printf("Time %d: ", i);

        for (int j= 0; j < LENGTH; j++) {
        printf("%d ", sim_array[j]);
        }
        printf("\n\n");

        for (int j= 0; j < LENGTH; j++) {

            if (*(p_temp_array + j) == 1){
                random = rand() % 2;        // create random number 0 or 1
                random = random * 2 - 1;    // change in -1 or 1
                *(p_sim_array + j) = 0;
                
                // printf("%d\n", random);

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

                //check collision
                if (*(p_sim_array + j + random) == 1) {  
                    *(p_sim_array + j + random) = 0;
                    printf("Collision on index %d\n\n", j + random);
                } else {
                    *(p_sim_array + j + random) = 1;
                }
            }
        }

        for (int j = 0; j < LENGTH; j++) {
            p_temp_array[j] = p_sim_array[j];
        }
    }
    return 0;
}