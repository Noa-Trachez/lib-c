/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** my_show_word_array
*/
#include <stdlib.h>
#include "my.h"

int my_show_word_array(char * const *tab)
{
    int len_array = 0;
    int i = 0;

    while (tab[len_array] != NULL) {
        len_array += 1;
    }
    while (i < len_array) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return i;
}
