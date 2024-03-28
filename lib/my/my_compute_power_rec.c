/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** put the nbr at the power
*/

int overflow_nb2(unsigned int *mynbr)
{
    if (*mynbr > __INT32_MAX__) {
        *mynbr = 0;
        return (0);
    }
    return (1);
}

void check_nb2(int *nb, int *p, int *sign)
{
    if (*nb < 0) {
        if (*p % 2 == 1) {
            *sign = -1;
        } else {
            *sign = 1;
        }
        *nb *= -1;
    } else {
        *sign = 1;
    }
}

int my_compute_power_rec(int nb, int p)
{
    int res;
    int sign;

    check_nb2(&nb, &p, &sign);
    if (p < 0) {
        return (0);
    }
    if (p > 0) {
        res = (nb * my_compute_power_rec(nb, p - 1));
        return (overflow_nb2((unsigned int *)&res) ? (res * sign) : 0);
    } else {
        return (1);
    }
}
