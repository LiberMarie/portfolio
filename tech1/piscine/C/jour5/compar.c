/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    if (str == NULL || this->str == NULL)
        return (0);
    return (strcmp(this->str, str->str));
}

int compare_c (const string_t *this, const char *str)
{
    if (str == NULL || this->str == NULL)
        return (0);
    else if (this == NULL || (this->str == NULL && str))
        return (-1);
    else if (this->str && str == NULL)
        return (1);
    return (strcmp(this->str, str));
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    long unsigned int x = 0;

    if (this == NULL || s == NULL || this->str == NULL)
        return (0);
    for (long unsigned int i = 0; this->str[i] != '\0'; i++) {
        if (i > pos && n < i){
            s[x] = this->str[i];
            x++;
        }
    }
    return (x);
}

const char *c_str(const string_t *this)
{
    if (this != NULL)
        return (this->str);
    else
        return (NULL);
}

int empty(const string_t *this)
{
    if (this == NULL || this->str == NULL)
        return (1);
    if (strlen(this->str) == 0)
        return (1);
    return (0);
}
