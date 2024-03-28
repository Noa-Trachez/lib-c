/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int answer = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            answer = 1;
        } else {
            return (0);
        }
    }
    return (answer);
}
