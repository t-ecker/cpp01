#include "Weapon.h"

const std::string&  Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(const std::string type)
{
    this->_type = type;
}

Weapon::Weapon(const std::string weapon)
    : _type(weapon)
{
    this->setType(weapon);
}

Weapon::~Weapon(void)
{
}