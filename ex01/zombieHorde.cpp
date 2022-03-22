#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zom;

    zom = new Zombie[N];
    while (N > 0)
    {
        zom[N - 1].set_name(name);
        N--;
    }
    return zom;
}