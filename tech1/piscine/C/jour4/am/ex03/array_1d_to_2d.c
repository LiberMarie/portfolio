/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 03
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void array_1d_to_2d(const int *array, size_t height, size_t width, int ***res)
{
    int x = 0;
    *res = malloc (sizeof(int *) * height + 1);
    for (unsigned int i = 0; i < height; i++) {
        (*res)[i] = malloc(sizeof(int) * width + 1);
        for (unsigned int j = 0; j < width; j++) {
            (*res)[i][j] = array[x];
            x++;
        }
    }
}

void array_2d_free(int **array, size_t height, size_t width)
{
    for (unsigned int i = 0; i < height; i++)
        free(array[i]);
    free(array);
}
