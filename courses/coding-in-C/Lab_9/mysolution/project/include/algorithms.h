/*
 * File: algorithms.h
 * Description: Header file for playlist functions
 */

#ifndef ALGORITHMS_H
#define ALGORITHMS_H  

typedef struct Song Song;
typedef struct Playlist Playlist;

 /**
 * @brief Initialize a playlist
 *
 * @return  Playlist    Pointer to Playlist
 */
Song* find_song_by_title(Playlist *p_list, const char *title);

#endif