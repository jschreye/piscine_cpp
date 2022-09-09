#include "Dog.hpp"

Dog::Dog()
{
	this->_Brain = new Brain();
    this->_type = "Dog";
    std::cout << getType() << " create" << std::endl;
}

Dog::Dog(const Dog& Dog)
{
	this->_Brain = new Brain(*Dog._Brain);
    this->_type = "Dog";
 	std::cout << "Copy constructor called" << std::endl; 
}

Dog::~Dog()
{
	delete this->_Brain;
	std::cout << "Dog destructed" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	Animal::operator=(rhs);
	if (this->_Brain)
		delete (this->_Brain);
	if (this != &rhs)
		this->_Brain = new Brain(*rhs._Brain);
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "dog say Wouf" << std::endl;
}