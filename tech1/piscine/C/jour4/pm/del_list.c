/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "int_list.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

bool int_list_del_elem_at_front(int_list_t *front_ptr)
{
    int_list_t list = *front_ptr;
    if (*front_ptr == NULL)
        return (false);
    int_list_t nodedel = list;
    *front_ptr = list->next;
    free(nodedel);
    return (true);
}

bool int_list_del_elem_at_back(int_list_t *front_ptr)
{
    int_list_t list = *front_ptr;
    if (*front_ptr == NULL)
        return (false);
    if ((*front_ptr)->next == NULL){
        (*front_ptr) = NULL;
        return (true);
    }
    while (list->next->next != NULL)
        list = list->next;
    list->next = NULL;
    return (true);
}

bool int_list_del_elem_at_position(int_list_t *front_ptr, unsigned int position)
{
    int_list_t list = *front_ptr;
    int_list_t backup = *front_ptr;
    unsigned int x = 0;
    unsigned int len = int_list_get_size(*front_ptr);
    if (position == 0)
        return (int_list_del_elem_at_front(front_ptr));
    else if (position + 1 == len)
        return (int_list_del_elem_at_back(front_ptr));
    if (*front_ptr == NULL)
        return (false);
    while (list->next != NULL && x != position) {
        backup = list;
        list = list->next;
        x++;
    }
    if (x != position || list ->next == NULL)
        return (false);
    list->next = backup->next;
    free(backup);
    return (true);
}

void int_list_clear(int_list_t *front_ptr)
{
    int_list_t list = *front_ptr;
    int_list_t backup = *front_ptr;
    while (list != NULL) {
        backup = list;
        list = list->next;
        free (backup);
    }
    free(front_ptr);
    *front_ptr = NULL;
}