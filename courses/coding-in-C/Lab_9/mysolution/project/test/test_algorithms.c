/*
 * File: test_algorithms.c
 * Description: test file for algorithms functions                               
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "../include/playlist.h"
#include "../include/algorithms.h"

/**
 * @brief Test the function find_song_by_title
 */
void test_find_song_by_title(void)
{
    Playlist *p_list = init_playlist();
    assert(p_list != NULL);

    add_song(p_list, "Title_1", "Artist_1");
    add_song(p_list, "Title_2", "Artist_2");
    add_song(p_list, "Title_3", "Artist_3");

    Song *p_foundsong;
    p_foundsong = find_song_by_title(p_list, "Title_1");
    assert(strcmp(p_foundsong->title, "Title_1") == 0);

    Song *p_foundsong_2;
    p_foundsong_2 = find_song_by_title(p_list, "Title_2");
    assert(strcmp(p_foundsong_2->title, "Title_2") == 0);

    Song *p_foundsong_3;
    p_foundsong_3 = find_song_by_title(p_list, "Title_2");
    assert(strcmp(p_foundsong_3->title, "Title_2") == 0);

    Song *p_foundsong_4;
    p_foundsong_4 = find_song_by_title(p_list, "filure");
    assert(p_foundsong_4 == NULL);

    delete_playlist(&p_list);
}

/**
 * @brief Test the function count_songs_recursive
 */
void test_count_songs_recursive(void)
{
    Playlist *p_list = init_playlist();
    assert(p_list != NULL);

    add_song(p_list, "Title_1", "Artist_1");
    add_song(p_list, "Title_2", "Artist_2");
    add_song(p_list, "Title_3", "Artist_3");

    int count = count_songs_recursive(p_list->head);
    assert(count == 3);

    delete_playlist(&p_list);
}

int main()
{
    test_find_song_by_title();
    test_count_songs_recursive();
}