/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 05
*/

#include <stddef.h>
#include <stdio.h>

size_t uniq_int_array(int *array, size_t nmemb)
{
    for (unsigned int x = 0; x < nmemb; x++){
        int val = array[x];
        for (unsigned int y = x + 1; y < nmemb; y++){
            if (array[y] == val){
                for (unsigned int z = y; z < nmemb; z++){
                    array[z] = array[z + 1];
                    nmemb--;
                }
            }
            else
                y++;
        }
    }
    return (nmemb);
}

size_t uniq_array(void *array, size_t nmemb, size_t size,
int(*compare)(const void *, const void *))
{
    int *array_copie = array;
    for (unsigned int x = 0; x < nmemb; x++){
        int val = array_copie[x];
        for (unsigned int y = x + 1; y < nmemb; y++){
            if (array_copie[y] == val){
                for (unsigned int z = y; z < nmemb; z++){
                    array_copie[z] = array_copie[z + 1];
                    nmemb--;
                }
            }
            else
                y++;
        }
    }
    array = array_copie;
    return (nmemb);
}
