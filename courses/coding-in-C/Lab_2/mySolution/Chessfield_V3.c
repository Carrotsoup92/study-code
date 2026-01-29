#include <stdio.h>

int fieldNumber = 8;
char fieldName []= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
int i;
int j;

int main()
{
    for (i = 0 ; i < 8; i++){
        for (j = 0; j < 8; j++){

             printf("%c%d ", fieldName [j], fieldNumber);
        }
         
        printf("\n"); 
        printf("\n");
        
        fieldNumber--;
        
    }
}
