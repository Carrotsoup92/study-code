/*
 * File: playlist.c
 * Description: Implementation of playlist functions
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "../include/playlist.h"

/**
 * @brief short description of the function
 *
 * More detailed description if needed
 *
 * @param[in]  param1 Explain parameter 1 (Input)
 * @param[out] param2 Explain parameter 2 (Output/Pointer)
 * @return            Explanation of return value
 */
Playlist * init_playlist(void) {

    Playlist *p_list = malloc(sizeof(Playlist));

    if (p_list == NULL) {
        printf("Error by init Playlist!");
        return NULL;
    }

    p_list->head = NULL;
    p_list->tail = NULL;

    return p_list;
}

void add_song(Playlist *p_list, char *title, char *artist ) {

    Song *p_newsong = malloc(sizeof(Song));

    if (p_newsong == NULL) {
        printf("Error by add song!");
        return;
    }

    p_newsong->artist = malloc(strlen(title) + 1);
    p_newsong->title = malloc(strlen(artist) + 1);

    if (p_newsong->artist == NULL || p_newsong->title == NULL) {
        printf("Error by add artist or title");
        free(p_newsong->artist);
        free(p_newsong->title);
        free(p_newsong);
        return;
    }

    strcpy(p_newsong->artist, artist);
    strcpy(p_newsong->title, title);
    p_newsong->next = NULL;

    if (p_list->head == NULL ) {
        p_list->head = p_newsong;
        p_list->tail = p_newsong;
    } else {
        p_list->tail->next = p_newsong;
        p_list->tail = p_newsong;
    }
}