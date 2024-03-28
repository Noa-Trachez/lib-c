/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int index_dest = 0;
    int index_str = 0;

    while (dest[index_dest] != '\0') {
        index_dest += 1;
    }
    while (src[index_str] != '\0') {
        dest[index_dest] = src[index_str];
        index_str += 1;
        index_dest += 1;
    }
    return (dest);
}
