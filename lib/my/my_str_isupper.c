/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    int answer = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            answer = 1;
        } else {
            return (0);
        }
    }
    return (answer);
}
