##
## EPITECH PROJECT, 2020
## B-PSU-100-RUN-1-1-myls-yann.joubert
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_put_nbr3.c	\
		my_putstr.c \
		my_printf.c \
		my_printf_putchar.c \
		my_printf_putnbr.c \
		my_printf_putstr.c \
		my_convert_base.c \
		my_printf_convert_base.c	\
		my_strcat.c	\
		my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-I ./include -W -Wall -Werror -Wextra

all:	$(OBJ) copy
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

copy:
	mkdir -p ../../include
	cp ./include/my.h ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all