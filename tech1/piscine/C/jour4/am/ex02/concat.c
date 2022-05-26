/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 02
*/

#include "concat.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void concat_strings(const char *str1, const char *str2, char **res)
{
    int strlen1 = strlen(str1);
    int strlen2 = strlen(str2);
    int strlentotal = strlen1 + strlen2;
    if (str1 == NULL)
    {
        *res = malloc(sizeof(char *) * strlen2 + 1);
        *res = strcpy(*res, str2);
        *res = strcat(*res, "\0");
    } else if (str2 == NULL) {
        *res = malloc(sizeof(char *) * strlen1 + 1);
        *res = strcpy(*res, str1);
        *res = strcat(*res, "\0");
    } else {
        *res = malloc(sizeof(char *) *strlentotal + 2);
        *res = strcpy(*res, str1);
        *res = strcat(*res, str2);
        *res = strcat(*res, "\0");
    }
}

void concat_struct(concat_t *str)
{
    concat_strings(str->str1, str->str2, &str->res);
}
