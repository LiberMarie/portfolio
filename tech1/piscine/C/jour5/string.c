/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include "string.h"
#include <stdlib.h>
#include <string.h>

void string_init(string_t *this, const char *s)
{
    if (this != NULL) {
        this->str = NULL;
        this->str = strdup(s);
    }
    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->c_str = &c_str;
    this->clear = &clear;
    this->length = &length;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->copy = &copy;
    this->empty = &empty;
}

void string_destroy(string_t *this)
{
    if (this->str != NULL && this != NULL)
        free (this->str);
}

void assign_s(string_t *this, const string_t *str)
{
    if (this != NULL && str != NULL) {
        free (this->str);
        this->str = strdup(str->str);
    }
}

void assign_c (string_t *this, const char *str)
{
    if (this != NULL && str != NULL) {
        free (this->str);
        this->str = strdup(str);
    }
}

void clear (string_t *this)
{
    if (this != NULL)
        this->str[0] = '\0';
}
