/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** Swap twoo adress
*/

void my_swap(int *a, int *b)
{
    int intermediate = *a;

    *a = *b;
    *b = intermediate;
}
