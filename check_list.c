/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-pushswap-yann.joubert
** File description:
** check_list.c
*/

#include "push_swap.h"
#include "my.h"
#include "printf.h"
#include <stdlib.h>
#include <stdbool.h>

bool check_list(list_t *list_la)
{
    while (list_la->next != NULL) {
        if (list_la->value > list_la->next->value) {
            return (false);
        } else {
            list_la = list_la->next;
        }
    }
    return (true);
}