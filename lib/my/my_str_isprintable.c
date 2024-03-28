/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int answer = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 126) {
            answer = 1;
        } else {
            return (0);
        }
    }
    return (answer);
}
