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

bool int_list_add_elem_at_position(int_list_t *front_ptr, int elem,
unsigned int position);

bool int_list_add_elem_at_back(int_list_t *front_ptr, int elem);

bool int_list_add_elem_at_front(int_list_t *front_ptr, int elem);

unsigned int int_list_get_size(int_list_t list)
{
    unsigned int x = 0;
    while (list != NULL) {
        x++;
        if (list->next != NULL)
            list = list->next;
        else
            return (x);
    }
    return (x);
}

bool int_list_is_empty(int_list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}

void int_list_dump(int_list_t list)
{
    while (list != NULL) {
        printf("%d\n", list->value);
        if (list->next != NULL)
            list = list->next;
        else
            list = NULL;
    }
}
