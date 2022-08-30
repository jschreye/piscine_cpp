#include "Contact_Class.hpp"

Contact::Contact(void)
{
    std::cout << "constructor Contact" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "destroy constructor Contact" << std::endl;
    return;
}

void Contact::_checklength(std::string *str)
{
    if (str->length() > 10)
    {
        str->resize(9);
        str->push_back('.');
    }     
}

void Contact::display_four_index(int i)
{
    (void)i;
    std::cout << std::setfill (' ') << std::setw (10) << index << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_first_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_last_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_nickname << '|';
    std::cout << "\n";
}

void Contact::display_all(void)
{
    std::cout << std::setfill (' ') << std::setw (10) << this->_first_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_last_name << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_nickname << '|';
    std::cout << std::setfill (' ') << std::setw (10) << this->_phone_number << '|';
    std::cout << std::setfill (' ') << std::setw (11) << this->_darkest_secret;
    std::cout << "\n";
}

void Contact::putdata(int c)
{
    index = c;
    std::cout << "Please enter your coordinates \n";
    std::cout << "first_name: ";
    std::getline(std::cin, this->_first_name);
    while (this->_first_name.empty())
    {
        std::cout << "first_name: ";
        std::getline(std::cin, this->_first_name);
    }
    Contact::_checklength(&_first_name);
    std::cout << "last_name: ";
    std::getline(std::cin, this->_last_name);
    while (this->_last_name.empty())
    {
        std::cout << "last_name: ";
        std::getline(std::cin, this->_last_name);
    }
    Contact::_checklength(&_last_name);
    std::cout << "nickname: ";
    std::getline(std::cin, this->_nickname);
    while (this->_nickname.empty())
    {
        std::cout << "nickname: ";
        std::getline(std::cin, this->_nickname);
    }
    Contact::_checklength(&_nickname);
    std::cout << "phone_number: ";
    std::getline(std::cin, this->_phone_number);
    while (this->_phone_number.empty() || this->_phone_number.length() > 10)
    {
        std::cout << "phone_number is not correct or empty";
        std::cout << "phone_number: ";
        std::getline(std::cin, this->_phone_number);
    }
    Contact::_checklength(&_phone_number);
    std::cout << "darkest_secret: ";
    std::getline(std::cin, this->_darkest_secret);
    while (this->_darkest_secret.empty())
    {
        std::cout << "darkest_secret: ";
        std::getline(std::cin, this->_darkest_secret);
    }
}
