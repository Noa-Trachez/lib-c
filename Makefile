##
## EPITECH PROJECT, 2021
## Make
## File description:
## Make
##

SRC	=		main.c

OBJ	=	$(SRC:.c=.o)

LIB_FLAGS	=	-L lib -lmy

NAME	=	libc

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(LIB_FLAGS)

clean	:
	make clean -C lib/my/
	rm -rf $(OBJ)

fclean	:	clean
	make fclean -C lib/my/
	rm -rf $(NAME)

re	:	fclean all
