/*
** EPITECH PROJECT, 2021
** concat_params
** File description:
** concat_params
*/
#include "stdlib.h"

char *concat_params(int argc, char **argv)
{
    char *str;
    int i = 0;
    int str_index = 0;

    str = malloc(sizeof(char) * (argc + 1));
    while (i < argc) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            str[str_index] = argv[i][j];
            str_index++;
        }
        str[str_index] = '\n';
        str_index++;
        i++;
    }
    str[str_index -1] = '\0';
    return (str);
}
