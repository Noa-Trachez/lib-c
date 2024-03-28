/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** Affiche N si négatif sinon affiche P
*/
#include "my.h"

int my_isneg (int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return n;
}
