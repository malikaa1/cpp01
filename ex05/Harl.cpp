#include "Harl.hpp"
#include <map>

Harl::Harl()
{
    return;
}

Harl::~Harl()
{
    return;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldn t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::map<std::string, Harl::PtrToFn> _map;
    _map["debug"] = &Harl::debug;
    _map["info"] = &Harl::info;
    _map["warning"] = &Harl::warning;
    _map["error"] = &Harl::error;

    Harl x;

    PtrToFn d = _map[level];

    if (d != NULL)

        (x.*d)();
}
