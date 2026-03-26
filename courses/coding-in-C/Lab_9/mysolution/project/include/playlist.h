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

/**
 * @brief Initialize a playlist
 *
 * @return  Playlist    Pointer to Playlist
 */
Playlist * init_playlist(void); 

/**
 * @brief add song to playlist
 *
 * @param[in,out]   playlist pointer to playlist
 * @param[in]       title    title for the song
 * @param[in]       artist   arrtist of the song
 */
void add_song(Playlist *p_list, char *title, char *artist );

/**
 * @brief Print the playlist
 *
 * @param[in]   playlist pointer to playlist
 */
void print_playlist(Playlist *p_list);

/**
 * @brief Delete first song of the playlist
 *
 * @param[in,out]   playlist pointer to playlist
 */
void delete_song(Playlist *p_list);

/**
 * @brief Delete the playlist
 *
 * @param[in,out]   playlist pointer to playlist
 */
void delete_playlist(Playlist **p_list);

#endif