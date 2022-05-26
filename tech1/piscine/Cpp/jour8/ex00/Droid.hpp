#ifndef Droid_
#define Droid_
#include <iostream>


class Droid
{
    public:
        Droid(std::string number);
        Droid(Droid& copied);
        Droid();
        ~Droid();
        size_t getAttack();
        size_t getToughness();
        std::string getId();
        size_t getEnergy();
        std::string *getStatus();
        void setId(std::string id);
        void setEnergy(size_t energy);
        void setStatus(std::string *status);
        bool operator==(const Droid &other) const;
        bool operator!=(const Droid &other) const;
        Droid& operator<<(size_t &energy);
        Droid& operator=(const Droid &other);

    private:
        std::string _Id;
        size_t _Energy;
        const size_t _Attack;
        const size_t _Toughness;
        std::string *_Status;
};

std::ostream& operator<<(std::ostream& os, Droid &other);

#endif