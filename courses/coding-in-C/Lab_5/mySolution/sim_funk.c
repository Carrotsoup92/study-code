/*
 * File: sim_funk.c
 * Description: funktions for sim_particles_2.c
 */
 
 #include "sim_head.h"

//set particle(1) by index 2,4,6
void set_particle(int array[]){
    int particle = 2;
    for (int i = 0; i < 3; i++){   
        array[particle] = 1;
        particle += 2;
    }
}