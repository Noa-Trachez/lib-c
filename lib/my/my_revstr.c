/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int len = 0;
    int end;
    int temp;

    while (str[len] != '\0') {
        len += 1;
    }
    end = len - 1;
    for (int range = 0; range < (len / 2); range++) {
        temp = str[range];
        str[range] = str[end];
        str[end] = temp;
        end -= 1;
    }
    str[len] = '\0';
    return (str);
}
