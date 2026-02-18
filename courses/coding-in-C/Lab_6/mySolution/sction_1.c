/*
 * File: sction_1.c
 * Description: Write data with diffrent Streams at a text file.
*/

#include <stdio.h>

int main() {

    //open fiel for writing
    FILE *file = fopen("Text_s1.txt", "w+");

    // check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputc('8', file); // write a single character to the file
    fputc('\n', file); // write a newline character to the file
    fputc('H', file); // write a single character to the file
    fputs("ello, World!\n", file); // write a string to the file
    fprintf(file, "This is a number: %d\n", 42); // write

    rewind(file); // move the file pointer back to the beginning of the file

    int c = fgetc(file); // read a single character from the file
    printf("%d", c);   // print in ASCII code

    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c); 
    }
    printf("\n");

    rewind(file); // move the file pointer back to the beginning of the file

    char buffer[100]; // define a buffer to hold the string

    char *result = fgets(buffer, sizeof(buffer), file); // read a string from the file
    if (result != NULL) {
        printf("%s", buffer); // print the string
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer); // print the string
    }

    fclose(file); // close the file

    //open fiel for writing
    FILE *file_1 = fopen("Text_s2.txt", "w+");

    // check if file opened successfully
    if (file_1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i<5; i++) {
        fputc('i', file_1); // write a single character to the file
        fputc('i +' 1, file_1); // write a single character to the file
        fputc('\n', file_1); // write a newline character to the file
    }


    fclose(file_1); // close the file
    return 0;
}