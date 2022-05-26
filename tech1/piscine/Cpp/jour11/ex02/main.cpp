#include "Picture.hpp"
#include <fstream>
#include <string>
#include "Toy.hpp"
#include "Woody.hpp"
#include "Buzz.hpp"

void testEx02()
{
    Woody W("woooooooody", "../woody.txt");
    Buzz B("buzz", "../buzz.txt");
    if (W.getType() == Toy::WOODY)
        std::cout << "I'm a Woody" << std::endl;
    std::cout << "this alien is: " << W.getName() << std::endl
            << W.getAscii() << std::endl;
    if (B.getType() == Toy::BUZZ)
        std::cout << "I'm a Woody" << std::endl;
    std::cout << "this alien is: " << B.getName() << std::endl
            << B.getAscii() << std::endl;
}

int main ()
{
    testEx02();
    return 0;   
}