#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    return;
}
void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB()
{
    return;
}