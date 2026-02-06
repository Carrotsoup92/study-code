#include <stdio.h>

unsigned char status = 0xA7;
int code[7] = {0};
int test, test1 = 0;

int main() {
    
    if (test == 1){
        for (int i = 7; i >= 0; i--) {
            int bit = (status >> i) & 1;
            printf("Bit %d: %d\n", i, bit);
        }
    }
         
    for (int i = 7; i >= 0; i--) {
        code[i] = (status >> i) & 1;
    }

    if (test1 == 1){
        for (int i = 0; i <= 7; i++) {
        printf("%d", code[i]);
        }
    printf("\n");
    }
    
    if (code[7] == 1){
        printf("There in an error.\n");
    } 
    if (code[6] == 1){
        printf("There in an overheating.\n");
    } 
    if (code[5] == 1){
        printf("There in an undervoltage.\n");
    }
    int value = status & 0xF;
    printf("The messured value is: %d", value);
}