/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** my_strcapitalize
*/

char *lowcase(char *str)
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

int before_maj(char *str)
{
    if (str[0] == 32 || str[0] == 43 || str[0] == 45) {
        return (1);
    } else {
        return (0);
    }
}

int can_maj(char *str)
{
    if (str[0] >= 97 && str[0] <= 122) {
        return (1);
    } else {
        return (0);
    }
}

char *my_strcapitalize(char *str)
{
    int index = 0;

    if (str == 0)
        return 0;

    lowcase(str);
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    while (str[index] != '\0') {
        if (before_maj(&str[index]) && can_maj(&str[index + 1])) {
            str[index + 1] -= 32;
        } else  {
            index++;
        }
    }
    return str;
}
