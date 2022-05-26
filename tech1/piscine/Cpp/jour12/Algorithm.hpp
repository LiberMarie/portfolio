/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Algorithm
*/

#ifndef ALGORITHM_HPP_
#define ALGORITHM_HPP_

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T max(const T& a, const T& b)
{
    if (a < b)
        return b;
    return a;
}

template <typename T>
T min(const T& a, const T& b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
T clamp(const T& a, const T& b, const T& c)
{
    if ((a < b && b < c) || (c < b && b < a))
        return b;
    else if ((b < a && a < c) || (c < a && a < b))
        return a;
    else if ((a < c && c < b) || (b < c && c < a))
        return c;
    return c;
}
#endif /* !ALGORITHM_HPP_ */
