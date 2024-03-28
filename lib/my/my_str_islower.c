/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    int answer = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            answer = 1;
        } else {
            return (0);
        }
    }
    return (answer);
}
