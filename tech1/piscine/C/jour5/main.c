/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "string.h"
#include <stdio.h>

int main (void)
{
    string_t s;
    char *str = "salut";
    int x = 0;
    string_init(&s , "Hello Word");
    printf("%c\n", s.at(&s, 0));

    //s.append_c(&s, ", how are you?");
    //printf("%s\n",s.str);
    //printf("%d\n", s.length(NULL));
    s.copy(&s, str, 2, 3);
    //s.clear(&s);
    printf("%d", str);
    string_destroy(&s);
    return (0) ;
}
