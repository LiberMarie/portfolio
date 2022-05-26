/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 00
*/

#include <filesystem>
#include <iostream>
#include <fstream>

int my_cat (char *av)
{
    
    if (std::filesystem::exists (av)) {
        std::string str;
        std::ifstream file (av);
        while (std::getline (file, str)){
            std::cout << str << std::endl;
        }
        return (0);
    }
    else {
        std::cerr << "my_cat: " << av <<": No such file or directory" << std::endl;
        return (84);
    }

}

int start_my_cat (int ac, char **av)
{
    int count = 1;
    while (count < ac) {
        my_cat (av[count]);
        count++;
    }
    return (0);
}

int main (int ac, char **av)
{
    if (ac == 1 && av[0] != NULL){
        std::cerr << "my_cat: " << "Usage: ./my_cat file [...]" << std::endl;
        return (84);
    }
    else
        start_my_cat(ac, av);
    
    return (0);
}