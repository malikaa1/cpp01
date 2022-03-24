#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    return;
}
void HumanB::attack()
{
    std::cout << this->name << "attacks with their" << weapon.getType();
}