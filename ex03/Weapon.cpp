#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->type = name;
    return ;
}

Weapon::~Weapon()
{
    return;
}
Weapon::~Weapon()
{
    return;
}

std::string Weapon::getType()
{
    std::string &str = this->type;
    return str;
}

void Weapon::setType(std::string value)
{
    this->type = value;
}