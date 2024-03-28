##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 	= 	*.c

OBJ 	= 	$(SRC:.c=.o)

NAME 	=	libmy.a


all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ..

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../$(NAME)

re: fclean all
