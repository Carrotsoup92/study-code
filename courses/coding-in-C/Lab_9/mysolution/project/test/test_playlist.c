/*
 * File: test_playlist.c
 * Description: test file for playlist functions
 * 
 * To build and run the test, you need to execute the following commands:
 *      gcc -I ./include -c src/playlist.c -o playlist.o        
 *      gcc -I ./include test/test_playlist.c playlist.o -o test_playlist
 *      ./test_playlist                                            
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../include/playlist.h"

/**
 * @brief Test the function init_playlist
 */
void test_int_playlist(void)
{
    Playlist *p_list = init_playlist();
    assert(p_list != NULL);

    assert(p_list->head == NULL);
    assert(p_list->tail == NULL);

    delete_playlist(&p_list);
}


/**
 * @brief Test the function add_song
 */
void test_add_song(void)
{
    Playlist *p_list = init_playlist();
    assert(p_list != NULL);

    add_song(p_list, "Title_1", "Artist_1");
    assert(p_list->head != NULL);
    assert(p_list->tail != NULL);
    assert(p_list->head == p_list->tail);

    add_song(p_list, "Title_2", "Artist_2");
    assert(p_list->head != NULL);
    assert(p_list->tail != NULL);
    assert(p_list->head != p_list->tail);

    delete_song(&p_list);
}


/**
 * @brief Test the function delete_somg
 */
void test_delete_song(void)
{
    Playlist * p_list = init_playlist();
    assert(p_list != NULL);

    add_song(p_list, "Title_1", "Artist_1");

}


/**
 * @brief Test the function delete_playlist
 */
void test_delete_playlist(void)
{
    Playlist *p_list = init_playlist();
    assert(p_list != NULL);

    delete_playlist(&p_list);
    assert(p_list == NULL);
}


int main ()
{
    test_int_playlist();
    test_add_song();
    test_delete_song();
    test_delete_playlist();

    printf("All test are succsessfully passt!");
}