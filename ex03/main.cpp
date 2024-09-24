#include "Weapon.h"

int main(void)
{
    // Weapon w1;
    // w1.setType("gun");
    // const std::string &ref = w1.getType();
    // std::cout << ref << std::endl;

    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
    return 0;
}