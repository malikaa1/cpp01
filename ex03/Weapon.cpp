#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string name)
{
    this->type = name;
    return ;
}

Weapon::~Weapon()
{
    return;
}

const std::string& Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string value)
{
    this->type = value;
}