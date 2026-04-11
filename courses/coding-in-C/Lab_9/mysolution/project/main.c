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

   add_song(p_list, "Title_4", "Artist_4");
   add_song(p_list, "Title_5", "Artist_5");
   add_song(p_list, "Title_2", "Artist_2");
   add_song(p_list, "Title_1", "Artist_1");
   add_song(p_list, "Title_3", "Artist_3");

   print_playlist(p_list); 


   Song *p_foundsong;

   p_foundsong = find_song_by_title(p_list, "Title_3");
   if(p_foundsong == NULL)
   {
      printf("Error by find_song\n");
   } else 
   {
      printf("Song found: %s\n", p_foundsong->title);
   }

   int number = count_songs_recursive(p_list->head);
   printf("The playlist has %d songs\n", number);

   sort_playlist_by_title(p_list);

   print_playlist(p_list);

   delete_playlist(&p_list);

   return 0;
}