#ifndef SKAT_
#define SKAT_

#include <string>
#include <iostream>

class Skat
{
    public :
        Skat(const std::string &name = "bob", int stimPaks = 15);
        ~Skat();
        int& stimPaks();
        const std::string& name();
        void shareStimPaks(int number, int& stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status();
    private :
        std::string namea;
        int stimPaksa;
};

#endif