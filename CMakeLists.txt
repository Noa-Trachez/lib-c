cmake_minimum_required(VERSION 3.27)
project(Cworkshoplib C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(lib/my)

add_library(my STATIC
        lib/my/concat_params.c
        lib/my/my.h
        lib/my/my_compute_power_rec.c
        lib/my/my_compute_square_root.c
        lib/my/my_getnbr.c
        lib/my/my_isneg.c
        lib/my/my_put_nbr.c
        lib/my/my_putchar.c
        lib/my/my_putstr.c
        lib/my/my_revstr.c
        lib/my/my_show_word_array.c
        lib/my/my_str_isalpha.c
        lib/my/my_str_islower.c
        lib/my/my_str_isnum.c
        lib/my/my_str_isprintable.c
        lib/my/my_str_isupper.c
        lib/my/my_str_to_word_array.c
        lib/my/my_strcapitalize.c
        lib/my/my_strcat.c
        lib/my/my_strcmp.c
        lib/my/my_strcpy.c
        lib/my/my_strdup.c
        lib/my/my_strlen.c
        lib/my/my_strlowcase.c
        lib/my/my_strncat.c
        lib/my/my_strncmp.c
        lib/my/my_strncpy.c
        lib/my/my_strstr.c
        lib/my/my_strupcase.c
        lib/my/my_swap.c
)

add_executable(Cworkshoplib
        include/my.h
        main.c)

target_link_libraries(Cworkshoplib my)