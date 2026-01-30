/*Crate a chessfield*/

#include <stdio.h>

int field_size = 8;
char field_name [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

int main(){
    for (int i = 1; i < 8; i++){
        printf("%c", field_name[i]);
    }
}