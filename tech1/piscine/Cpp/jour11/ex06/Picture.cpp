/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Picture
*/

#include <fstream>
#include <string>
#include "Picture.hpp"

Picture::Picture()
{
    this->data = "";
}

Picture::Picture(const std::string &filename)
{
    this->getPictureFromFile(filename);
}
Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream Fichier(file);
    if (Fichier)
    {
        std::string temps;
        while (getline(Fichier,temps)){
            this->data = this->data + temps + "\n";
        }
    }
    else{
        this->data = "ERROR";
        return false;
    }
    return true;
}