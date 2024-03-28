/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (s1 == 0 && s2 == 0)
        return 0;
    if (s1 == 0)
        return 1;
    if (s2 == 0)
        return -1;
    n -= 1;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n) {
        i += 1;
    }
    return (s1[i] - s2[i]);
}
