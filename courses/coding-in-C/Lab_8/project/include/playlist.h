/*
 * File: playlist.h
 * Description: headerfile for playlist.c
 */

#ifndef PLAYLIST_H
#define PLAYLIST_H

#define MAX_SONGS 10

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
    int lenght;
} Playlist;

Playlist * init_playlist() ;

void add_song(Playlist *P, char title[], char artist[]);

void printQueue(Playlist * P);






#endif