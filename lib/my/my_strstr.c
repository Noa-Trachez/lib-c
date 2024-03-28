/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** my_strstr
*/

int my_strn_cmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    n -= 1;
    while (s1[i] == s2[i] && s1[i] != '\0' && i < n) {
        i += 1;
    }
    return (s1[i] - s2[i]);
}

char *my_strstr(char *str, char const *to_find)
{
    int index_to_find = 0;
    int answer = 1;
    int index_str = 0;

    if (to_find[0] == '\0') {
        return (str);
    }
    while (to_find[index_to_find] != '\0') {
        index_to_find += 1;
    }
    while (str[index_str] != '\0') {
        answer = my_strn_cmp(&str[index_str], to_find, index_to_find);
        index_str += 1;
        if (answer == 0) {
            return (&str[index_str - 1]);
        }
    }
    return 0;
}
