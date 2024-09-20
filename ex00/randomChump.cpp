#include "Zombie.h"

void randomChump(std::string    name)
{
    Zombie z1;
    z1.set_name(name);
    z1.announce();
}