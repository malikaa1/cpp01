#include "Zombie.hpp"

int main()
{
    int i = 0;
    int N = 3;
    Zombie *zom = zombieHorde(N, "foo");
    while (i < N)
    {
        zom[i].announce();
        i++;
    }
    delete[] zom;
}