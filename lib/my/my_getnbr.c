/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** Return nbr
*/

void sign_check(int *quotient, char const *str, int *range)
{
    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-') {
            *quotient *= -1;
        }
        *range = i + 1;
    }
}

int nbr_check(char const *str, int *range, int *quotient)
{
    int my_number = 0;

    for (int i = *range; str[i] >= '0' && str[i] <= '9'; i++) {
        if (my_number > (2147483648 - (str[i] - 48)) / 10) {
            return (0);
        }
        if (*quotient == 1 && my_number > (2147483647 - (str[i] - 48)) / 10) {
            return (0);
        }
        my_number = (my_number * 10) + (str[i] - 48);
    }
    my_number *= *quotient;
    return (my_number);
}

int my_getnbr(char const *str)
{
    int quotient = 1;
    int range = 0;

    sign_check(&quotient, str, &range);
    return nbr_check(str, &range, &quotient);
}
