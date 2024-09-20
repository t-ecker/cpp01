#include "Zombie.h"

int main(void)
{
    Zombie *z1 = newZombie("Ben");
    (*z1).announce();
    randomChump("Tom");
    delete(z1);
}