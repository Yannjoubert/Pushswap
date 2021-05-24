/*
** EPITECH PROJECT, 2020
** main
** File description:
** main.c
*/

#include "push_swap.h"
#include "my.h"
#include "printf.h"
#include <stdlib.h>

void make_list(list_t **list, int element)
{
    list_t *list_la = malloc(sizeof(list_t));
    list_t *tmp = *list;

    list_la->value = element;
    list_la->next = NULL;
    if (*list == NULL) {
        *list = list_la;
    } else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = list_la;
    }
}

void push_swap2(list_t **list_la, list_t **list_lb)
{
    list_t *temp1 = *list_lb;

    while (temp1 != NULL) {
        my_pa(list_la, list_lb);
        temp1 = temp1->next;
    }
    if (check_list(*list_la) == false) {
        my_putchar(' ');
        push_swap(list_la, list_lb);
    }
}

void push_swap(list_t **list_la, list_t **list_lb)
{
    list_t *temp = *list_la;

    while (temp->next != NULL) {
        if (temp->value > temp->next->value) {
            my_sa(list_la);
            my_pb(list_la, list_lb);
        } else {
            my_pb(list_la, list_lb);
        }
        temp = temp->next;
    }
    push_swap2(list_la, list_lb);
}

void display_list(list_t **list)
{
    list_t *list_la = *list;

    while (list_la != NULL) {
        my_printf("%d ", list_la->value);
        list_la = list_la->next;
    }
}

int main(int ac, char **av)
{
    list_t *list_la = NULL;
    list_t *list_lb = NULL;
    int i = 1;

    if (ac < 2) {
        my_putchar('\n');
        return (0);
    } else if (ac == 3) {
        if (my_getnbr(av[1]) > my_getnbr(av[2]))
            my_putstr("sa");
        my_putchar('\n');
        return (0);
    }
    while (av[i] != NULL) {
        make_list(&list_la, my_getnbr(av[i]));
        i = i + 1;
    }
    if (check_list(list_la) == false)
        push_swap(&list_la, &list_lb);
    my_putchar('\n');
    return (0);
}