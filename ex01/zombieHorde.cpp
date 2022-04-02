#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zom;

    zom = new Zombie[N];
    while (N > 0)
    {
        N--;
        zom[N].set_name(name);
    }
    return zom;
}