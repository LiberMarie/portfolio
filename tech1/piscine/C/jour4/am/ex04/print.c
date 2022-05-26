/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 04
*/

#include "print.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    char *str_maj = malloc(sizeof(char) * strlen(str) + 1);
    str_maj = strcpy(str_maj, str);
    for (int i = 0; str_maj[i] != '\0'; i++) {
        if (str_maj[i] <= 'z' && str_maj[i] >= 'a')
            str_maj[i] = str_maj[i] - 32;
    }
    printf("%s", str_maj);
    printf("\n");
    free (str_maj);
}

void print_42(const char *str)
{
    str = "42";
    printf("%s\n", str);
}

void (*namefct[4])(const char *) = {print_normal,
    print_reverse,
    print_upper,
    print_42
};

void do_action(action_t action, const char *str)
{
    namefct[action](str);
}
