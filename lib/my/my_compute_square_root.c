/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** returns the square root
*/

int my_compute_square_root(int nb)
{
    unsigned int answer = 0;

    if (nb < 0) {
        return (0);
    }
    while ((answer * answer) <= nb) {
        if ((answer * answer) == nb) {
            return (answer);
        }
        answer++;
    }
    return (0);
}
