/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "int_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

bool int_list_add_elem_at_front(int_list_t *front_ptr, int elem)
{
    int_list_t head = malloc(sizeof(int_node_t));
    if (head == NULL)
        return (false);
    if (*front_ptr == NULL) {
        head->value = elem;
        head->next = NULL;
        *front_ptr = head;
        return (true);
    }
    head->value = elem;
    head->next = *front_ptr;
    *front_ptr = head;
    return (true);
}

bool int_list_add_elem_at_back(int_list_t *front_ptr, int elem)
{
    int_list_t head = *front_ptr;
    int_list_t backup = *front_ptr;
    if (*front_ptr == NULL)
        return (int_list_add_elem_at_front(front_ptr, elem));
    while (head->next != NULL)
        head = head->next;
    int_list_t list_d = malloc(sizeof(int_node_t));
    if (list_d == NULL){
        return (false);
    }
    list_d->value = elem;
    list_d->next = NULL;
    head->next = list_d;
    *front_ptr = backup;
    return (true);
}

bool int_list_add_elem_at_position(int_list_t *front_ptr, int elem,
unsigned int position)
{
    unsigned int x = 1;
    int_list_t head = *front_ptr;
    int_list_t backup = *front_ptr;
    int_node_t *list_d = malloc(sizeof(int_node_t));

    if (position == 0){
        int_list_add_elem_at_front(front_ptr, elem);
        return (true);
    }
    while (x < position - 1 && head->next != NULL){
        head = head->next;
        x++;
    }
    if (list_d == NULL  || int_list_get_size(*front_ptr) < position)
        return (false);
    list_d->value = elem;
    list_d->next = head->next;
    head->next = list_d;
    *front_ptr = backup;
    return (true);
}
