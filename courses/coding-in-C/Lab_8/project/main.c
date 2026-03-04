/*
 * File: main.c
 * Description: Simple calculator program
 */

#include <stdio.h>
#include <stdlib.h>
#include "include/playlist.h" 

int main() {

    Playlist *List = init_playlist();
    if (List == NULL) {
        return 1;
    }

    add_song(List, "Title A", "Artist A");
    printQueue(List);

    add_song(List, "Title B", "Artist B");  
    printQueue(List);

    for (int i = 0; i < 10; i++){
        char artist[15];
        char title [15];
        char letter = 'C' + i;

        sprintf(artist, "artist %c", letter);
        sprintf(title, "title %c", letter);

        add_song(List, title, artist);
    }
    
    printQueue(List);

    delete_firstsong(List);
    delete_firstsong(List);

    printQueue(List);

    delete_playlist(List);

    return 0;
}