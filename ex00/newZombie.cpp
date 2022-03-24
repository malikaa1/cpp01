#include "Zombie.hpp"

Zombie *newZombie(std::string _name)
{
    Zombie *zom;

    zom = new Zombie(_name);
    return zom;
}