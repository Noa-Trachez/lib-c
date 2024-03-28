/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 89) {
            str[i] = str[i] + 32;
        }
        i += 1;
    }
    return (str);
}
