/*
 * File: playlist.c
 * Description: functions for a playlist
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/playlist.h"

 Playlist *init_playlist() {
    Playlist *P = malloc(sizeof(Playlist));

    if (P == NULL) {
            printf("Error with mem by init_playlsist\n");
        }

    P->Head = NULL;
    P->Tail = NULL;
    return P;
}

void add_song(Playlist *P, char title[], char artist[]) {
    Song *el = malloc(sizeof(Song));

    if (el == NULL) {
            printf("Error with mem by add_song\n");
        }

    el->title = strdup(title);
    el->artist = strdup(artist);
    el->next = NULL;

    if(P->Head == NULL){
        P->Head = el;
        P->Tail = el;
    } else {
        P->Tail->next = el;
        P->Tail = el;
    }
}

void delete_firstsong(Playlist *P) {
    if(P->Head == NULL) {
        printf("List is alrady empty.");
    } else {
        Song *out = P->Head;
        P->Head = out->next;
        free(out);
    }
}

void delete_playlist(Playlist *P) {
    while (P->Head != NULL) {
        delete_firstsong(P);
    }
    printf("List is deleted.");
    free(P);  
}