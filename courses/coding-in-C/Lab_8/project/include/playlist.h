/*
 * File: playlist.h
 * Description: headerfile for playlist.c
 */

#ifndef PLAYLIST_H
#define PLAYLIST_H

#define MAX_SONGS 999

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



#endif