#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = WrongAnimal;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::setType(std::string const type)
{
    this->_type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WRONGANIMAL SAY KISS KISS LOVE" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
    return ;
}