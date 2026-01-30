/*Crate a chessfield*/

#include <stdio.h>

int field_size = 8;
char field_name [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

int main(){

    printf("    ");
    for (int i = 0; i < 8; i++){
        printf("%c", field_name[i]);
        printf("   ");
    } 
    printf("\n");
  
    printf("  +");
    for (int i = 0; i < 8; i++){
        printf("---+");
    }
    printf("\n");

    for (int i = 8; i > 0; i--){
        printf("%d ", i);
        printf("|");
            for (int j = 0; j < 4; j++){
                printf("###|   |");
            }
            printf("\n");
            for (int k = 0; k < 8; k++){
                printf("---+");
            }
    }
}