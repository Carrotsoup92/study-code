/*
 * File: section1.c
 * Description: Train with allocation memory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // p_number is pointer at the address, *p_number is the value
    int *p_number = malloc(sizeof *p_number);

    if (p_number == NULL) {
        printf("Error number\n");
        return 1;
    }

    printf("Input number > 0: ");

    if (scanf("%d", p_number) != 1) {
        printf("Invalid input\n");
        free(p_number);
        return 1;
    }
    if (*p_number <= 0) {
        printf("Invalid input\n");
        free(p_number);
        return 1;
    }

    printf("Your number is: %d\n", *p_number);

    int *p_array = calloc(*p_number,sizeof *p_array);

    if (p_array == NULL) {
        printf("Error array\n");
        free(p_number);
        return 1;
    }

    for (int i = 0; i < *p_number; i++){
        p_array[i] = i * i;
        printf("%d, ", p_array[i]);
    }
    printf("\n");

    int *p_newarray = realloc(p_array,2 * sizeof *p_newarray);

    if (p_newarray == NULL) {
        printf("Error newarray\n");
    } else {
        p_array = p_newarray;
        p_newarray = NULL;
    }
 
    int length = *p_number * 2;

    for (int i = *p_number; i < length; i++){
        p_array[i] = i * i;
        printf("%d, ", p_array[i]);
    }
    printf("\n");

    free(p_number);
    free(p_array);

    return 0;
}