#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << getType() << " create" << std::endl;
}

Cat::Cat(const Cat& Cat)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat()
{

}

Cat&    Cat::operator=(const Cat& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "cat say Miaou" << std::endl;
}