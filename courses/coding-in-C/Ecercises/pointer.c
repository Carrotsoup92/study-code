// pointer.c
// to learn how to use pointers in C

#include <stdio.h>

int main (){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int *ptr1 = myNumbers + 1;
    int *ptr2 = myNumbers + 4;

    printf("Value: %d, ptr1: %p\n", *ptr1, ptr1);
    printf("Value: %d, ptr2: %p\n", *ptr2, ptr2);
    
    int div = ptr2 - ptr1;
    printf("div: %d\n", div);
}
