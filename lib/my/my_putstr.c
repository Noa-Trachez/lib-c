/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Display one-by-one the characters
** of a string
*/
#include "my.h"

int my_putstr(char const *str)
{
    int range_letter = 0;

    while (str[range_letter] != '\0') {
        my_putchar(str[range_letter]);
        range_letter++;
    }
    return range_letter;
}
