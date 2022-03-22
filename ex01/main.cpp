#include "Zombie.hpp"

int main()
{
    int i = 0;
    Zombie *zom = zombieHorde(3, "foo");
    while (i < 3)
    {
        zom->announce();
        i++;
    }
    delete[] zom;
}