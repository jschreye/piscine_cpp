#include "HarlClass.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

std::string change_min_in_maj(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return (str);
}

void Harl::complain(std::string level)
{
    level = change_min_in_maj(level);
    if (level.compare("DEBUG") == 0)
        _debug();
    else if (level.compare("INFO") == 0)
        _info();
    else if (level.compare("WARNING") == 0)
        _warning();
    else if (level.compare("ERROR") == 0)
        _error();
    else
        std::cout << "Error arguments" << std::endl;
}

void Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}