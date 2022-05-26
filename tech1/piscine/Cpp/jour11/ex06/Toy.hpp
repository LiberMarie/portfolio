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
        class Error {
            public:
                Error();
                enum ErrorType {UNKNOWN, PICTURE, SPEAK};
                
                std::string where() const;
                std::string what() const;
                ErrorType type; 
        };
        enum ToyType {BASIC_TOY, ALIEN, BUZZ, WOODY};
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
        virtual void speak(std::string message);
        Toy &operator<<(const std::string message);
        virtual bool speak_es(std::string message);
        Error& getLastError(){return _error;};
    protected:
        ToyType _ToyType;
        Picture _Picture;
        std::string _name;
        Error _error;
};

std::ostream &operator<<(std::ostream &os, const Toy &obj);

#endif /* !TOY_HPP_ */
