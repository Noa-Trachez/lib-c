/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** mylib
*/
#ifndef MY_LIB_

    #define MY_LIB_

void my_putchar(char);
char *my_strstr(char *, char const *);
int my_isneg(int);
int my_strcmp(char const *, char const *);
int my_put_nbr(int);
int my_strncmp(char const *, char const *, int);
void my_swap(int *, int *);
char *my_strupcase(char *);
int my_putstr(char const *);
char *my_strlowcase(char *);
int my_strlen(char const *);
char *my_strcapitalize(char *);
int my_getnbr(char const *);
int my_str_isalpha(char const *);
int my_sort_int_array(int *, int);
int my_str_isnum(char const *);
int my_compute_power_rec(int, int);
int my_str_islower(char const *);
int my_compute_square_root(int);
int my_str_isupper(char const *);
int my_is_prime(int);
int prime(int);
int my_str_isprintable(char const *);
int my_find_prime_sup(int);
int my_showstr(char const *);
char *my_strcpy(char *, char const *);
int my_showmem(char const *, int);
char *my_strncpy(char *, char const *, int);
char *my_strcat(char *, char const *);
char *my_revstr(char *);
char *my_strncat(char *, char const *, int);
void check_nb2(int *, int *, int *);
int overflow_nb2(unsigned int *);
int nbr_check(char const *, int *, int *);
void sign_check(int *, char const *, int *);
int before_maj(char *);
int my_strn_cmp(char const *, char const *, int);
int check_uppercase(char const *, int );
char *lowcase(char *);
int can_maj(char *);
char *concat_params(int, char **);
int my_show_word_array(char * const *);
char **my_str_to_word_array(char *);
char *my_strdup(char const *);
int all_print(int, int);
int power_of_number(int);
int len_number(int);
void display_max(void);
int is_alpha(char);
int lenght(char *, int *);
int count_word(char *);

#endif /* MY_LIB_ */
