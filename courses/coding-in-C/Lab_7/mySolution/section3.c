/*
 * File: section2.c
 * Description: write a musik playlist with a linked list
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Song
{
    char *title;
    char *artist;
    struct Song * next;
} Song;

typedef struct Playlist
{
    Song *Head;
    Song *Tail;
} Playlist;

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

void print_playlist(Playlist *P) {
    Song *temp = P->Head;
    while (temp != NULL){
        printf("Title: __%s__, Artist: __%s__\n", temp->title, temp->artist);
        temp = temp->next;
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

int main() {

    char *title_1 = {"Crawling"};
    char *artist_1 = {"Linkin Park"};

    char *title_2 = {"Layla"};
    char *artist_2 = {"Eric Clapton"};

    char *title_3 = {"Esperanto"};
    char *artist_3 = {"Max Herre"};

    Playlist *list = init_playlist();

    add_song(list, title_1, artist_1);
    add_song(list, title_2, artist_2);
    add_song(list, title_3, artist_3);

    print_playlist(list);
    delete_firstsong(list);
    print_playlist(list);

    delete_playlist(list);

    return 0;
}