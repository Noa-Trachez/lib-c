/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Display the number given as a
** parameter
*/
#include "my.h"

void display_max(void)
{
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int len_number(int nb)
{
    int counter = 0;

    while (nb > 0) {
        nb /= 10;
        counter++;
    }
    return (counter);
}

int power_of_number(int len)
{
    int powered_number = 1;

    for (int solution = 0; solution < len - 1; solution++) {
        powered_number *= 10;
    }
    return (powered_number);
}

int all_print(int nb, int powered)
{
    int inter;

    inter = 0;
    while (powered > 0) {
        inter = nb / powered;
        nb -= inter * powered;
        powered /= 10;
        my_putchar(inter + 48);
    }
    return inter;
}

int my_put_nbr(int nb)
{
    int len = 0;
    int powered = 0;
    char negative = nb < 0;
    
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (negative) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb == -2147483648) {
        display_max();
    }
    else {
        len = len_number(nb);
        powered = power_of_number(len);
        all_print(nb, powered);
    }
    return 0;
}
