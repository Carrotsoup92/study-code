#include <stdio.h>

int fieldNumber = 8;
int i;

int main()
{
    for (i = 0 ; i < 8; i++){
        
        printf("%c%d\t", 'A', fieldNumber); 
        printf("%c%d\t", 'B', fieldNumber);
        printf("%c%d\t", 'C', fieldNumber);
        printf("%c%d\t", 'D', fieldNumber);
        printf("%c%d\t", 'E', fieldNumber);
        printf("%c%d\t", 'F', fieldNumber);
        printf("%c%d\t", 'G', fieldNumber);
        printf("%c%d\n", 'H', fieldNumber);
         
        printf("\n"); 
        
        fieldNumber--;
    }
}
