#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon)
{
    return;
}

~HumanA::HumanA()
{
    return;
}

void HumanA::attack()
{
    std::cout << this->name << "attacks with their" << this->Weapon.getType();
}