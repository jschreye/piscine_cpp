#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << getType() << " create" << std::endl;
}

Dog::Dog(const Dog& Dog)
{
 	std::cout << "Copy constructor called" << std::endl;
	*this = Dog;   
}

Dog::~Dog()
{

}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "dog say Wouf" << std::endl;
}