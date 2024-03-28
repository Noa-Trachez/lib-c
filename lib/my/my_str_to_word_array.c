/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** my_str_to_word_array.c
*/
#include "stdlib.h"
#include "my.h"

int is_alpha(char str)
{
    if ((str >= 48 && str <= 57) || (str >= 65 && str <= 90) ||
    (str >= 97 && str <= 122)) {
        return (1);
    } else {
        return (0);
    }
}

int lenght(char *word, int *i)
{
    int len = 0;

    while (word[*i] != '\0' && is_alpha(word[*i])) {
        len++;
        *i += 1;
    }
    return (len);
}

int count_word(char *str)
{
    int counter = 1;
    int is_cesure = 1;

    while (*str != '\0') {
        if (is_alpha(*str)) {
            is_cesure = 0;
            str++;
        } else if (!is_alpha(*str) && is_cesure == 0) {
            counter += 1;
            is_cesure = 1;
            str++;
        } else {
            str++;
        }
    }
    str--;
    if (!is_alpha(*str)) {
        counter--;
    }
    return (counter);
}

char **my_str_to_word_array(char *str)
{
    char **tab;
    int nbr_word;
    int index = 0;
    int index_before;
    int test;

    nbr_word = count_word(str);
    tab = malloc(sizeof(char *) * (nbr_word + 1));
    for (int i = 0; i < nbr_word; i++) {
        while (str[index] != '\0' && !is_alpha(str[index])) {
            index += 1;
        }
        index_before = index;
        test = lenght(str, &index);
        tab[i] = malloc(sizeof(char) * (test + 1));
        my_strncpy(tab[i], &str[index_before], test);
    }
    return (tab);
}
