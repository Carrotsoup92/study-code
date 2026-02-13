// funk.c
// Funktions for arrayswap.c

#include "funk.h"

void Funk(char array[]){
    char *p =array;
    *(p+1) = 'c';  
}

void Funk2(char *array){
    array[1] = 'c';
}