/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_
#include "Picture.hpp"

class Toy {
    public:
        enum ToyType {BASIC_TOY, ALIEN};
        Toy();
        Toy(ToyType type, std::string name, const std::string &filename);
        ~Toy();
        int getType() const;
        std::string getName() const;
        void setName(const std::string &name);
        bool setAscii(const std::string &filename);
        std::string getAscii() const;
        Toy(const Toy&copie);
        Toy &operator=(const Toy& copie);
    protected:
    ToyType _ToyType;
    Picture _Picture;
    std::string _name;
    private:
};

#endif /* !TOY_HPP_ */
