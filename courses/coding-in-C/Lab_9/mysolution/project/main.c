/*
 * File: main.c
 * Description: main file for Lab_9 
 */

 #include <stdio.h>
 
 #include "include/playlist.h"

 int main ()
 {
    Playlist *p_list = init_playlist();

    add_song(p_list, "Title_1", "Artist_1");
    add_song(p_list, "Title_2", "Artist_2");
    add_song(p_list, "Title_3", "Artist_3");

    print_playlist(p_list); 



    
    delete_playlist(&p_list);
 }