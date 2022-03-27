#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w): weapon(w)
{
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA()
{
    return;
}
void HumanA::setWeapon(Weapon& weapon)
{
    this->weapon = weapon;
}
void HumanA::attack()
{
    std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}