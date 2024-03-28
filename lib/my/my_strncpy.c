/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len_dest = 0;

    while (dest[len_dest] != '\0') {
        len_dest += 1;
    }
    while (i != n) {
        dest[i] = src[i];
        i += 1;
    }
    if (i == len_dest || i > len_dest) {
        dest[i] = '\0';
    }
    return (dest);
}
