/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include <iostream>
#include <iomanip>

float convertfahrenheit(float temperature)
{
    float result = 0;
    result = 5.0 / 9.0 * (temperature - 32);
    return (result);
}

float convertcelsius(float temperature)
{
    float result = temperature * 9.0 / 5.0 + 32;
    return (result);
}

int main(void)
{
    float temperature;
    std::string type;
    float result = 0.000;
    
    std::cin >> temperature >> type;
    if (type == "Celsius"){
        result = convertcelsius(temperature);
        std::cout.precision(3);
        std::cout << std::right << std::setw(16) << std::fixed << result << std::setw(16) << "Fahrenheit" << std::endl;
        return (0);
    }
    else if (type == "Fahrenheit") {
        result = convertfahrenheit(temperature);
        std::cout.precision(3);
        std::cout << std::right << std::setw(16) << std::fixed << result << std::setw(16) << "Celsius" << std::endl;
        return (0);
    }
    return (84);
}