#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    return;
}

void Zombie::announce()
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string _name)
{
    this->name = _name;
}
std::string Zombie::get_name(void)
{
    return (name);
}


 
