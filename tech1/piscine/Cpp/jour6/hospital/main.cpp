#include "SickKoala.hpp"
#include "KoalaDoctor.hpp"
#include "KoalaDoctorList.hpp"

int main (void)
{
    KoalaDoctor koalaDoctor("clo");
    //KoalaDoctorList KoalaDoctorList(&koalaDoctor);
    SickKoala sickKoala("théo");
    sickKoala.takeDrug("rien");
    //std::cout << koalaDoctorList.isEnd() << std::endl;
    return 0;
}