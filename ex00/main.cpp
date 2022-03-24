#include "Zombie.hpp"

int main()
{
    Zombie *zom= newZombie("foo");
    zom->announce();
    delete zom;
    randomChump("foo2");
}