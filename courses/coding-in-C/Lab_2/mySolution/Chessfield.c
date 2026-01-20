#include <stdio.h>

int fieldNumber = 8;
int i;
int j;

int main()
{
    for (i = 0 ; i < 7; i++){
        for (j = 0; j < 7; j++){
            printf("%a%c", 'A' + fieldNumber); 
        }
        fieldNumber--;
    }
}