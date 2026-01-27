#include <stdio.h>

unsigned char status = 0xA7;
int code[7] = {0};

int main() {
    
    for (int i = 7; i >= 0; i--) {
        int bit = (status >> i) & 1;
        printf("Bit %d: %d\n", i, bit);
    }
        
    for (int i = 7; i >= 0; i--) {
        code[i] = (status >> i) &1;
    
    }
    for (int i = 0; i <= 7; i++) {
        printf("%d", code[i]);
    
    }

    
}