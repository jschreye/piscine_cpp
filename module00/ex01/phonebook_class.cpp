#include <iostream>
#include "phonebook_class.hpp"

Phone::Phone(void)
{
    std::cout << "hello" << std::endl;
    return;
}

Phone::~Phone(void)
{
    std::cout << "destroy hello" << std::endl;
    return;
}