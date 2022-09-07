#include "Cat.hpp"

Cat::Cat()
{
	this->_Brain = new Brain();
    this->_type = "Cat";
    std::cout << getType() << " create" << std::endl;
}

Cat::Cat(const Cat& Cat)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_Brain = new Brain(*Cat._Brain);
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "cat destructed" << std::endl;
}

std::string Cat::getIdeas(int index)
{
	return (this->_Brain->getIdea(index));
}
void Cat::setBrain(std::string &src, int index)
{
	this->_Brain->setIdea(src, index);
}

Cat&    Cat::operator=(const Cat& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_Brain = new Brain(*rhs._Brain);
	return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "cat say Miaou" << std::endl;
}