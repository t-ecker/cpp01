#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.h"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        void    attack(void);
        void    setWeapon(Weapon &weapon);
        HumanB(std::string name);
        ~HumanB(void);

};

#endif