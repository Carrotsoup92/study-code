// arrayswap.c
// swap elements of an array

#include <stdio.h>
#include "funk.h"

int main() {
   
    char array[] ="Curly bird chatches the worm";
    char *ptr = array;

    printf("%s\n", array);
    printf("%p\n", ptr);

    *ptr = 'E';
    *(ptr + 1) = 'a';
    printf("%s\n", array);

    char array1[] = "AAtions speaks louder than words";
    Funk(array1);
    printf("%s\n", array1);

    char array2[] = "AAtions speaks louder than words";
    Funk2(array2);
    printf("%s\n", array2);

}