#include "Phonebook_Class.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "constructor Phonebook" << std::endl;
    return;
}

Phonebook::~Phonebook(void)
{
    std::cout << "destroy constructor Phonebook" << std::endl;
    return;
}

void Phonebook::display()
{
    std::cout << std::setfill (' ') << std::setw (10) << "index" << '|';
    std::cout << std::setfill (' ') << std::setw (10) << "first_name" << '|';
    std::cout << std::setfill (' ') << std::setw (10) << "last_name" << '|';
    std::cout << std::setfill (' ') << std::setw (10) << "nickname" << '|';
    std::cout << "\n";
}

void Phonebook::display_rule()
{
    std::cout << "hello babe" << std::endl;
    std::cout << "write add for new user" << std::endl;
    std::cout << "write search for search a user" << std::endl;
    std::cout << "write exit for exit prog" << std::endl;
}
