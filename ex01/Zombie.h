#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string.h>
#include <iostream>

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);
#endif