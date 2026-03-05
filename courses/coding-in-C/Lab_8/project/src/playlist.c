/*
 * File: playlist.c
 * Description: functions for a playlist
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/playlist.h"

 Playlist * init_playlist() {
    Playlist *P = malloc(sizeof(Playlist));

    if (P == NULL) {
            printf("Error with mem by init_playlsist\n");
            return NULL;
        }

    P->Head = NULL;
    P->Tail = NULL;
    P->length = 0;

    return P;
}

void add_song(Playlist *P, char title[], char artist[]) {

    if (MAX_SONGS == P->length){
        printf("Queue max sitze is reached\n");
        return;
    }

    Song *el = malloc(sizeof(Song));

    if (el == NULL) {
        printf("Error with mem by add_song\n");
        return;
    }

    el->title = strdup(title);  // strdup allocates memory with malloc and copies the string
    el->artist = strdup(artist);
    el->next = NULL;

    if(P->Head == NULL){
        P->Head = el;
        P->Tail = el;
    } else {
        P->Tail->next = el;
        P->Tail = el;
    }
    P->length = P->length + 1;
}

//Print all elements of the queue
void printQueue(Playlist *P) {
    Song * temp = P->Head;     // start from the head
    printf("Queue:\n");
    while (temp != NULL) {
        printf("%d ", P->length);
        printf("%s ", temp->artist);
        printf("%s\n", temp->title);

        temp = temp->next;  // move to the next node
    }  
}

void delete_firstsong(Playlist *P) {
    if(P == NULL || P->Head == NULL) {
        printf("List is alrady empty.\n");
    } else {
        Song *out = P->Head;
        P->Head = out->next;
        if (P->Head == NULL) {
            P->Tail = NULL;
        }
        free(out->artist);
        free(out->title);
        free(out);
        out = NULL;
        P->length = P->length -1;
    }
    
}

void delete_playlist(Playlist *P) {
    while (P->Head != NULL) {
        delete_firstsong(P);
    }
    printf("List is deleted.\n");
    free(P);  
}