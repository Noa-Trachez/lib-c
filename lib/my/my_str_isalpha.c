/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** my_str_isalpha
*/

int check_uppercase(char const *str, int i)
{
    if (str[i] >= 65 && str[i] <= 90) {
        return (1);
    } else {
        return (0);
    }
}

int my_str_isalpha(char const *str)
{
    int answer = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (check_uppercase(str, i) || (str[i] >= 97 && str[i] <= 122)) {
            answer = 1;
        } else {
            return (0);
        }
    }
    return (answer);
}
