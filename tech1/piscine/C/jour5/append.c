/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "string.h"
#include <string.h>

void append_s(string_t *this, const string_t *ap)
{
    if (this != NULL && ap->str != NULL)
        append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    this->str = realloc(this->str, strlen(this->str) + strlen(ap) + 1);
    if (this != NULL && ap != NULL)
        this->str = strcat(this->str, ap);
}

char at(const string_t *this, size_t pos)
{
    unsigned int len = strlen(this->str);
    char car;
    if (pos <= 0)
        return (-1);
    if (len - 1 < pos || this->str == NULL || this == NULL)
        return (-1);
    for (unsigned int i = 1; i < pos && this->str[i] != '\0'; i++)
        car = this->str[i];
    return (car);
}

int length(const string_t *this)
{
    int size = 0;
    if (this == NULL || this->str == NULL)
        return (-1);
    size = strlen(this->str);
    return (size);
}
