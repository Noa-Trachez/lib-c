/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** counts and returns the number of
** characters found in the string
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return (len);
}
