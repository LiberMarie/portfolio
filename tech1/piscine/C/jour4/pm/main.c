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
int int_list_get_elem_at_front(int_list_t list);

static void populate_list ( int_list_t *list_head )
{
    int_list_add_elem_at_back(list_head, 5);
    int_list_add_elem_at_back(list_head, 42);
    int_list_add_elem_at_back(list_head, 3);

}

static void test_size ( int_list_t list_head )
{
    printf ( " There are %u elements in the list \n ", int_list_get_size(list_head));
    int_list_dump (list_head);
}

static void test_del ( int_list_t *list_head)
{
    int_list_del_elem_at_back (list_head);
    printf ( " There are %u elements in the list \n", int_list_get_size(*list_head));
    int_list_dump (*list_head);
}

int main (void)
{
    int_list_t list_head = NULL;
    populate_list (&list_head);
    test_size (list_head);
    test_del (&list_head);
    int_list_clear (&list_head);
    printf ("%u\n", int_list_get_size(list_head));
    return 0;
}

/*
int main(void) {
    int_node_t *list_a = malloc(sizeof(int_node_t));
    int_node_t *list_b = malloc(sizeof(int_node_t));
    int_node_t *list_c = NULL;

    list_a->value = 6;
    list_a->next = list_b;
    list_b->value = 12;
    list_b->next = NULL;
    printf("list size: %d\n", int_list_get_size(list_a));
    printf("list c vide?\n");
    if (int_list_is_empty(list_c))
        printf("oui\n");
    else
        printf("non");
    printf("valeur de list_a: %d\n", list_a->value);
    printf("valeur de list_b: %d\n", list_b->value);
    printf("dump list_a:\n");
    int_list_dump(list_a);
    int_list_add_elem_at_front(&list_a, 35);
    printf("redump list_a:\n");
    int_list_dump(list_a);
    int_list_add_elem_at_back(&list_a, 45);
    printf("redump list_a:\n");
    int_list_dump(list_a);
    int_list_add_elem_at_position(&list_a, 496, 10);
    printf("redump list_a:\n");
    int_list_dump(list_a);
    printf("value start: %d\n", int_list_get_elem_at_front(list_a));
    printf("value end: %d\n", int_list_get_elem_at_back(list_a));
    printf("value end: %d\n", int_list_get_elem_at_position(list_a, 11));
    int_list_del_elem_at_front(&list_a);
    printf("redump list_a:\n");
    int_list_dump(list_a);
    int_list_del_elem_at_position(&list_a, 2);
    printf("redump delete list_a:\n");
    int_list_dump(list_a);
    int_list_clear(&list_a);
    printf("redump list_a:\n");
    //int_list_dump(list_a);

    return (0);
}*/