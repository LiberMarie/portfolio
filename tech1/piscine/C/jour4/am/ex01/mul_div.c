/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 01
*/

#include <stdlib.h>
#include <stdio.h>

void mul_div_long(int a, int b, int *mul, int *div)
{
    *mul = a * b;
    if (b == 0)
        *div = 42;
    else
        *div = a / b;
}

void mul_div_short(int *a, int *b)
{
    int first = *a;
    int second = *b;
    *a = first * second;
    if (second == 0)
        *b = 42;
    else
        *b = first / second;
}
