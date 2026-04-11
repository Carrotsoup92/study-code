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


 /**
 * @brief Counts songs in a playlist
 *
 * @return  int  counted songs
 */
int count_songs_recursive(const Song *current);


/**
 * @brief Insertion Sort to sort songs in a playlist
 *
 * @param[in,out]   playlist      pointer to playlist
 */
void sort_playlist_by_title(Playlist *playlist);

#endif