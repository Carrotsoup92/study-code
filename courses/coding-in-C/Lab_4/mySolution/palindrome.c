// palindrome.c
// This program checks if a given string is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include "palin.h"

int main() {
    char word[100];
    char stop = '\0';
    
    printf("Please enter your word (max 100 characters): ");

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
   
    int length = get_length(word, stop);
    char palindrome[length];

    array_swap(word, palindrome, length);

    char check = check_palindrom(word, palindrome, length);

    answer(check, word);
}