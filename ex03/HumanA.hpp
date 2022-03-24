#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon &Weapon;
public:
    void attack();
    HumanA(std::string name,Weapon &weapon);
    void setWeapon(Weapon &Weapon);
    ~HumanA();
};
#endif