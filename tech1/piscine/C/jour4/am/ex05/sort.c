/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 05
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int compar (const void *x, const void *y)
{
    const int *resx = x;
    const int *resy = y;
    return (*resx - *resy);
}

void sort_int_array(int *array, size_t nmemb)
{
    qsort(array, nmemb, sizeof *array, compar);
}

void sort_array(void *array, size_t nmemb, size_t size, int(*compar)
(const void *, const void *))
{
    qsort (array, nmemb, size, compar);
}
