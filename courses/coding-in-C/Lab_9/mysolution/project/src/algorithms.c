/*
 * File: algorithms.c
 * Description: Implementation of algorithms functions for playlist
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #include "../include/playlist.h"
 #include "../include/algorithms.h"

 /**
 * @brief Search a song in a playlist
 * 
 * @param[in]   p_list      playlist
 * @param[in]   title       title of the song
 *
 * @return  Song   Pointer to Song
 */
Song* find_song_by_title(Playlist *p_list, const char *title)
{
    // check is pointer is invalid
    if (p_list == NULL|| title == NULL)
    {   
        printf("Error, NULL pointer in find_song\n");
        return NULL;
    }

    // create a copy of the first pointer
    Song *p_temp = p_list->head;

    while (p_temp != NULL)
    {
        if (strcmp(p_temp->title, title) == 0)
        {
            return p_temp;
        }
        p_temp = p_temp->next;
    }
    
    return NULL;
}


 /**
 * @brief Counts songs in a playlist
 *
 * @return  int  counted songs
 */
int count_songs_recursive(const Song *current)
{
    if (current == NULL)
    {
        return 0;
    }

    return 1 + count_songs_recursive(current->next);  
}

/**
 * @brief Counts songs in a playlist
 *
 * @return  int  counted songs
 */
void sort_playlist_by_title(Playlist *playlist)
{

}