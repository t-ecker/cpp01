#include "Zombie.h"

int main(void)
{
    int N = 4;
    Zombie *horde = zombieHorde(N, "Ben");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
}