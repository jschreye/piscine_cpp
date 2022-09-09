#include "Animal.hpp"

AAnimal::AAnimal()
{
    this->_type = "Animal";
}

AAnimal::AAnimal(const AAnimal& animal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = animal;
}

std::string AAnimal::getType() const
{
    return (this->_type);
}

void AAnimal::setType(std::string const type)
{
    this->_type = type;
}

void AAnimal::makeSound() const
{
    //std::cout << "GOD OF ANIMAL SAY KISS KISS LOVE" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "destroy Animal" << std::endl;
}