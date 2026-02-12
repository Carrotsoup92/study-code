// palindrome.c
// This program checks if a given string is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include "palin.h"

int main() {
    char word[100];
    char palindrome[100];

    printf("Please enter your word (max 100 characters):");
    fgets(word, sizeof(word), stdin);
    int lenght = sizeof(word);


    printf("%s", word);
    printf("%d", lenght);
}