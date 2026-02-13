/*Crate a chessfield*/

#include <stdio.h>

int field_size = 8;
char field_name [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

int main(){

    printf("     ");
    for (int i = 0; i < field_size; i++){
        printf("%c", field_name[i]);
        printf("   ");
    } 
    printf("\n");
    printf("   +");
    
    for (int i = 0; i < field_size; i++){
        printf("---+");
    }
    printf("\n");

    for (int i = field_size; i > 0; i--){

        printf("%d ", i);
        printf(" |");

        if(i %2 == 0){
            for (int j = 0; j < 4; j++){
            printf("###|   |");
            }
        } else {
            for (int j = 0; j < 4; j++){
            printf("   |###|");
            }
        }
        printf("\n");
        printf("   +");

        for (int j = 0; j < field_size; j++){
            printf("---+");
        }
        printf("\n");
    }
    printf("     ");
    for (int i = 0; i < field_size; i++){
        printf("%c", field_name[i]);
        printf("   ");
    } 
}