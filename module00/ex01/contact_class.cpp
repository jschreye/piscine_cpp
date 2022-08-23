#include <iostream>
#include "contact_class.hpp"

Contact::Contact(void)
{
    std::cout << "coucou" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "destroy coucou" << std::endl;
    return;
}