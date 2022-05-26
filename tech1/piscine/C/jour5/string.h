/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#ifndef str_
#define str_


#include <stddef.h>
#include <string.h>
#include <stdlib.h>

typedef struct string_s string_t;

typedef struct string_s{
    char *str;
    void (*string_init)(string_t *this, const char *s);
    void (*string_destroy)(string_t *this);
    void (*assign_s)(string_t *this, const string_t *str);
    void (*assign_c)(string_t *this, const char *str);
    void (*append_s)(string_t *this, const string_t *str);
    void (*append_c)(string_t *this, const char *str);
    void (*clear)(string_t *this);
    char (*at)(const string_t *this, size_t pos);
    int (*length)(const string_t *this);
    int (*compare_s)(const string_t *this, const string_t *str);
    int (*compare_c)(const string_t *this, const char *str);
    size_t (*copy)(const string_t *this, char *s, size_t n, size_t pos);
    const char *(*c_str)(const string_t *this);
    int (*empty)(const string_t *this);
}string_t;

int empty(const string_t *this);
const char *c_str(const string_t *this);
void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *str);
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
char at(const string_t *this, size_t pos);
void clear(string_t *this);
int length(const string_t *this);
int compare_s(const string_t *this, const string_t *str);
int compare_c (const string_t *this, const char *str);
size_t copy(const string_t *this, char *s, size_t n, size_t pos);
#endif