/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 05
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void disp_int_array(int *array, size_t nmemb)
{
    for (unsigned int i = 0; i < nmemb; i++)
        printf("%d\n", array[i]);
}

void disp_array(const void *array, size_t nmemb, size_t size, 
void (*print)(const void *))
{
    const char *array_copie = array;
    (print)(array_copie);
}