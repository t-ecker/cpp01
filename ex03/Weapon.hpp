#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.h"

class Weapon
{
    private:
        std::string _type;
    public:
        const std::string&  getType(void);
        void                setType(const std::string type);
        Weapon(const std::string weapon);
        ~Weapon();
};

#endif