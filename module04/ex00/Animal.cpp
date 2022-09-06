#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = animal;
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::setType(std::string const type)
{
    this->_type = type;
}

void Animal::makeSound() const
{
    //std::cout << "GOD OF ANIMAL SAY KISS KISS LOVE" << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
    return ;
}