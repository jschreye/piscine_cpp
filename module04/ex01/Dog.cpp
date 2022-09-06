#include "Dog.hpp"

Dog::Dog()
{
	this->_Brain = new Brain();
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
	delete this->_Brain;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_Brain = rhs._Brain;
		for (int i = 0; i < 100; i++)
		{
			this->_Brain->ideas[i] = rhs._Brain->ideas[i];
		}
	}
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "dog say Wouf" << std::endl;
}