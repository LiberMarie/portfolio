/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_
#include <iostream>


class Picture {
    public:
        Picture();
        Picture(const std::string &filename);
        ~Picture();
        std::string data;
        bool getPictureFromFile(const std::string &file);
    protected:
    private:
};

#endif /* !PICTURE_HPP_ */
