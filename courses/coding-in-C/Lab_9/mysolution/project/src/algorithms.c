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
 * @brief Insertion Sort to sort songs in a playlist
 *
 * @param[in,out]   playlist      pointer to playlist
 */
void sort_playlist_by_title(Playlist *playlist)
{
    if (playlist == NULL || playlist->head == NULL)
    {
        return;
    }

    // initialise a new list, is a temporary head for the sorted list
    Song *sorted = NULL;
     
    // Start with the first element
    Song *current = playlist->head;

    // iterate through every song in the original list
    while (current != NULL)
    {
        // save the new node
        Song *next = current->next;

        // insert the new song at the beginning, or the current song is smaller (< 0) then the first song
        if (sorted == NULL || strcmp(current->title, sorted->title) < 0)
        {
            // point the current song to the head of the new list and make it the first song
            current->next = sorted;
            // update the head of the new list
            sorted = current;
        }
        // insert the node at the right place
        else
        {
            // create a temporary pointer to find the right insertion spot
            Song *temp = sorted;

            // iterrate thtough the new list till the list is at the end or the right place is found
            while (temp->next != NULL && strcmp(temp->next->title, current->title) < 0)
            {
                temp = temp->next;
            }
            // insert current between temp and temp->next
            current->next = temp->next;
            temp->next = current;
        }
        // moce to the next song in the original list
        current = next;
    }

    // update playlist with the sorted list
    playlist->head = sorted;
}