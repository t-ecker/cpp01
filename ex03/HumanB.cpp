#include "Weapon.h"

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
    : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << " died" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
