##
## EPITECH PROJECT, 2020
## B-PSU-100-RUN-1-1-myls-yann.joubert
## File description:
## Makefile
##

SRC		=	main.c	\
			push_swap.c	\
			check_list.c

OBJ		=	$(SRC:.c=.o)

NAME	=	push_swap

LIBMY 	= 	-L./lib/my/ -lmy

CFLAGS	=	-I ./include -W -Wall -Werror -Wextra -g3

all: 	$(NAME)

build_lib:
	make -C lib/my/ all

$(NAME): build_lib
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(LIBMY)

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)

fclean: clean
	make -C lib/my/ fclean
	rm -f $(NAME)
	rm -f libmy.a

re: fclean all