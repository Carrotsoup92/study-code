/*
 * File: playlist.c
 * Description: Implementation of playlist functions
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #include "../include/playlist.h"


/**
 * @brief Initialize a playlist
 *
 * @return  Playlist    Pointer to Playlist
 */
Playlist * init_playlist(void) 
{
    Playlist *p_list = malloc(sizeof(Playlist));

    if (p_list == NULL) 
    {
        printf("Error by init Playlist!");
        return NULL;
    }

    p_list->head = NULL;
    p_list->tail = NULL;

    return p_list;
}


/**
 * @brief add song to playlist
 *
 * @param[in,out]   playlist pointer to playlist
 * @param[in]       title    title for the song
 * @param[in]       artist   arrtist of the song
 */
void add_song(Playlist *p_list, char *title, char *artist ) 
{
    if (p_list == NULL)
    {
        printf("Error in add_song!\n");
        return;
    }

    Song *p_newsong = malloc(sizeof(Song));

    if (p_newsong == NULL) 
    {
        printf("Error by add song!");
        return;
    }

    p_newsong->artist = malloc(strlen(title) + 1);
    p_newsong->title = malloc(strlen(artist) + 1);

    if (p_newsong->artist == NULL || p_newsong->title == NULL) 
    {
        printf("Error by add artist or title!\n");
        free(p_newsong->artist);
        free(p_newsong->title);
        free(p_newsong);
        return;
    }

    strcpy(p_newsong->artist, artist);
    strcpy(p_newsong->title, title);
    p_newsong->next = NULL;

    if (p_list->head == NULL ) 
    {
        p_list->head = p_newsong;
        p_list->tail = p_newsong;
    } else 
    {
        p_list->tail->next = p_newsong;
        p_list->tail = p_newsong;
    }
}


/**
 * @brief Print the playlist
 *
 * @param[in]   playlist pointer to playlist
 */
void print_playlist(Playlist *p_list) 
{
    if (p_list == NULL)
    {
        printf("Error in print_song!\n");
        return;
    }

    Song *p_temp = p_list->head; 
    printf("Title:      |Artist:\n");

    while (p_temp != NULL) 
    {
        printf("%s|%s\n",p_temp->title, p_temp->artist);
        p_temp = p_temp->next;        
    }
    p_temp = NULL;
}


/**
 * @brief Delete first song of the playlist
 *
 * @param[in,out]   playlist pointer to playlist
 */
void delete_song(Playlist *p_list) 
{
    if (p_list == NULL)
    {
        printf("Error in delete_song!\n");
        return;
    }

    Song *p_temp = p_list->head;

    p_list->head = p_list->head->next;

    if (p_list->head == NULL)
    {
        p_list->tail = NULL;
    }

    free(p_temp);
    p_temp = NULL;
}


/**
 * @brief Delete the playlist
 *
 * @param[in,out]   playlist pointer to playlist
 */
void delete_playlist(Playlist **p_list) 
{
    if (*p_list == NULL)
    {
        printf("Playlist is not initialized!\n");
        return;
    }

    if ((*p_list)->head == NULL)
    {
        printf("Playlist is already empty!\n");

        free(*p_list);
        *p_list = NULL;
        return;
    }

    while ((*p_list)->head != NULL)
    {
        delete_song(*p_list);
    }
    
    free(*p_list);
    *p_list = NULL;
    printf("Playlist deleted!\n");
}