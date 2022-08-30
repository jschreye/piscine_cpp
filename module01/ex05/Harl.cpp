#include "HarlClass.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void complain(std::string level)
{
    _debug();
    _info();
    _warning();
    _error();
}

void _debug(void)
{
    std::cout << "1" << std::endl;
}

void _info(void)
{
    std::cout << "1" << std::endl;
}

void _warning(void)
{
    std::cout << "1" << std::endl;
}

void _error(void)
{
    std::cout << "1" << std::endl;
}