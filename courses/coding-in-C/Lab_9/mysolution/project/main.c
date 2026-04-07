/*
 * File: main.c
 * Description: main file for Lab_9 
 */

 #include <stdio.h>
 
 #include "include/playlist.h"
 #include "include/algorithms.h"

 int main ()
 {
   Playlist *p_list = init_playlist();

   add_song(p_list, "Title_1", "Artist_1");
   add_song(p_list, "Title_2", "Artist_2");
   add_song(p_list, "Title_3", "Artist_3");

   print_playlist(p_list); 


   Song *p_foundsong;

   p_foundsong = find_song_by_title(p_list, "Title_3");
   if(p_foundsong == NULL)
   {
      printf("Error by find_song\n");
   } else 
   {
      printf("%s\n", p_foundsong->title);
   }

   
   

   delete_playlist(&p_list);
 }