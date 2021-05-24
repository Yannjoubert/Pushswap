/*
** EPITECH PROJECT, 2020
** push_swap
** File description:
** push_swap.h
*/

#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

#include <stdlib.h>
#include <stdbool.h>

typedef struct list_s {
    int value;
    struct list_s *next;
} list_t;

void make_list(list_t **list, int element);
void display_list(list_t **list);
void my_sa(list_t **list);
void remove_head(list_t **list);
void put_head(list_t **list, int element);
void my_pa(list_t **list_la, list_t **list_lb);
void my_pb(list_t **list_la, list_t **list_lb);
void push_swap(list_t **list_la, list_t **list_lb);
void push_swap2(list_t **list_la, list_t **list_lb);
bool check_list(list_t *list_la);

#endif