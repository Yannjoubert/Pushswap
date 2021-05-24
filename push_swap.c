/*
** EPITECH PROJECT, 2020
** push_swap
** File description:
** push_swap.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/push_swap.h"
#include "my.h"
#include "my_printf_funct.h"
#include <unistd.h>

void my_pb(list_t **list_la, list_t **list_lb)
{
    int element = 0;

    element = (*list_la)->value;
    remove_head(list_la);
    put_head(list_lb, element);
    write (1, "pb ", 3);
}

void my_pa(list_t **list_la, list_t **list_lb)
{
    int element = 0;

    element = (*list_lb)->value;
    remove_head(list_lb);
    put_head(list_la, element);
    if (*list_lb == NULL) {
        write(1, "pa", 2);
    } else {
        write(1, "pa ", 3);
    }
}

void remove_head(list_t **list)
{
    (*list) = (*list)->next;
}

void put_head(list_t **list, int element)
{
    list_t *node = malloc(sizeof(list_t));

    if (*list == NULL) {
        node->value = element;
        node->next = NULL;
        *list = node;
    } else {
        node->value = element;
        node->next = *list;
        *list = node;
    }
}

void my_sa(list_t **list)
{
    list_t *list1 = *list;
    list_t * list2 = *list;
    int tmp = 0;

    list2 = list2->next;
    if (list2->value < list1->value) {
        tmp = list1->value;
        list1->value = list2->value;
        list2->value = tmp;
        write(1, "sa", 2);
        my_putchar(' ');
    }
}