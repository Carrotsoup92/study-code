/*
 * File: playlist.h
 * Description: Header file for playlist functions
 */

#ifndef PLAYLIST_H
#define PLAYLIST_H  

typedef struct Song
{
    char *title;
    char *artist;
    struct Song *next;
} Song;

typedef struct Playlist
{
    Song *head;
    Song *tail;
} Playlist;






#endif