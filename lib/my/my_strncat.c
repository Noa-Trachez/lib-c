/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int n)
{
    int index_dest = 0;
    int index_str = 0;

    while (dest[index_dest] != '\0') {
        index_dest += 1;
    }
    while (index_str < n) {
        dest[index_dest] = src[index_str];
        index_str += 1;
        index_dest += 1;
    }
    return (dest);
}
