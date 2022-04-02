#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
    this->name = _name;
    return;
}

Zombie::~Zombie()
{
    std::cout << "cleaning " << this->name << std::endl;
    return;
}

void Zombie::announce()
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name(void)
{
    return (name);
}
