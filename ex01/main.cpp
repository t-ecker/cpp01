#include "Zombie.h"

int main(void)
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "Ben");
    if (!horde)
    {
        std::cout << "creation failed" << std::endl;
        return (1);
    }
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}