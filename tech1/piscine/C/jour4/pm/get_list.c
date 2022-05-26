/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "int_list.h"
#include <stddef.h>

int int_list_get_elem_at_front(int_list_t list)
{
    int x = 0;
    if (list == NULL)
        return (0);
    x = list->value;
    return (x);
}

int int_list_get_elem_at_back(int_list_t list)
{
    int_list_t backup = list;
    int x = 0;
    if (backup == NULL)
        return (0);
    while (backup->next != NULL)
        backup = backup->next;
    x = backup->value;
    return (x);
}

int int_list_get_elem_at_position(int_list_t list, unsigned int position)
{
    int_list_t backup = list;
    int x = 0;
    unsigned int cnt = 1;
    if (backup == NULL || int_list_get_size(list) < position)
        return (0);
    if (position == 0)
        return (int_list_get_elem_at_front(list));
    while (backup->next != NULL && cnt < position){
        backup = backup->next;
        cnt++;
    }
    x = backup->value;
    return (x);
}
