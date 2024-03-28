/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int range = 0;

    if (s1 == 0 && s2 == 0)
        return 0;
    if (s1 == 0)
        return 1;
    if (s2 == 0)
        return -1;
    while (s1[range] == s2[range] && s1[range] != '\0' && s2[range] != '\0') {
        range += 1;
    }
    return (s1[range] - s2[range]);
}
