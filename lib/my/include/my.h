/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char const *str);
void my_put_nbr3(int nb);
int my_printf(char const *str, ...);
void my_printf_putchar(va_list *ap);
void my_printf_putnbr(va_list *ap);
void my_printf_putstr(va_list *ap);
int my_printf(char const *str, ...);
int my_vprintf(char const *str, va_list *ap, int b);
void convert_base_x(int nb);
void convert_base_x2(int nb);
void convert_base_o(int nb);
void convert_base_u(int nb);
void my_printf_convert_base_x2(va_list *ap);
void my_printf_convert_base_x(va_list *ap);
void my_printf_convert_base_o(va_list *ap);
void my_printf_convert_base_u(va_list *ap);
char *my_strcat(char *dest, char const *src);

#endif /* MY_H_ */