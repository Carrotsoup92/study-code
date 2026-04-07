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
 * @brief Initialize a playlist
 *
 * @return  Playlist    Pointer to Playlist
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