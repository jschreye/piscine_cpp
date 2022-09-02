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
    size_t i = 0;
    level = change_min_in_maj(level);
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(i < tab->size())
    {
        if (level == tab[i])
            break ;
        ++i;
    }
    switch (i)
    {
        case 0:
            _debug();

        case 1:
           _info();

        case 2:
            _warning();

        case 3:
            _error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}

void Harl::_debug(void)
{
    std::cout << "[DEBUG]\n"; 
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}