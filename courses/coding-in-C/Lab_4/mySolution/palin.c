// palin.c
// funktions for palindrome.c

#include <stdio.h>
#include "palin.h"
#include <string.h>

// return the length of the given word.
int get_length(char word[], char stop){
    char *pos = strchr(word, stop); // search the '\0' in the array

    // if '\0' if found in the array the funktion return the position
    if (pos != NULL) {  
        int length = pos - word;
        return length;
        }
}

void array_swap(char word[], char palindrome[], int length){
    int i = length -1;
    int j = 0;
    for ( i ; i >= 0; i--){
        palindrome[j] = word[i];
        j++;
    }
}

char check_palindrom(char word[], char palindrome[], int length){
    int i = length -1;
    char check = 'P';
    for (i ; i >=0; i--) {
        if (word[i] == palindrome[i]){
            check = 'Y';
        } else {
            check = 'N';
            break;
        }
    }
    return check;
}

void answer(char check, char word[]){
    if (check == 'Y'){
        printf("your provided word '%s' in a palindrom.");
    } else {
        printf("your provided word '%s' is not a Palindrom.");
    }   
}