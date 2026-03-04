/*
 * File: test_playlist.c
 * Description: To test the playlist functions
 */

#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "../include/playlist.h"



// test init_playlist function
void test_init_playlist(void) {
    Playlist *List = init_playlist();
    assert(List != NULL);
   
    assert(List->Head == NULL);
    assert(List->Tail == NULL);
    assert(List->length == 0);

    free(List);
}

void test_add_song(void) {
    Playlist *List = init_playlist();
    assert(List != NULL);
    
    add_song(List, "Title A", "Artist A");

    assert(List->Head != NULL);
    assert(List->Tail != NULL);
    assert(List->Head == List->Tail);
    assert(List->length == 1);

    free(List->Head);
    free(List);
}

// void test_delete_firstSong(List)
// {
//     delete_firstsong(List);

//     assert(List->Head == NULL);
//     assert(List->Tail == NULL);
//     assert(List->length == 0);
// }

// void test_delete_playlist(List)
// {
//     delete_playlist(List);

//     assert(List->Head == NULL);
//     assert(List->Tail == NULL);
//     assert(List->length == 0);
// }


int main(void)
{
    test_init_playlist();
    // test_add_song();
    // test_delete_firstSong();
    // test_delete_firstSong_empty(); // what happens if we delete first song from empty playlist
    // test_delete_playlist();
    // test_max_songs_limit(); // verify if the limit will be not be surpassed

    printf("Alle Playlist-Tests erfolgreich bestanden.\n");
    return 0;
}