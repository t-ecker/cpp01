#include "Zombie.h"

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

Zombie::Zombie(void)
    :   _name("unnamed")
{
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " died" << std::endl;
}


