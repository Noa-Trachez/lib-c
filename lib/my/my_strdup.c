/*
** EPITECH PROJECT, 2021
** Day08
** File description:
** my_strdup
*/
#include "stdlib.h"
#include "my.h"

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    return (str);
}
