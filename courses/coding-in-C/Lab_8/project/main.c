/*
 * File: main.c
 * Description: Simple calculator program
 */

#include <stdio.h>
#include <stdlib.h>
#include "include/playlist.h" 

int main() {

    Playlist *List = init_playlist();

    add_song(List, "Title A", "Artist A");
    printQueue(List);

    add_song(List, "Title B", "Artist B");
    printQueue(List);

    for (int i = 0; i < 10; i++){
        char artist[10];
        char title [10];
        char letter = 'C' + i;

        sprintf(artist, "artist %c", letter);
        sprintf(title, "title %c", letter);

        add_song(List, title, artist);
    }
    
    printQueue(List);



    
}