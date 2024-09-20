#include "Zombie.h"

Zombie* newZombie(std::string name)
{
    Zombie *Zombie1;

    Zombie1 = new Zombie;
    Zombie1->set_name(name);
    return (Zombie1);
}
