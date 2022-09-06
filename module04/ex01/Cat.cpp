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
	*this = Cat;
}

Cat::~Cat()
{
	delete this->_Brain;
}

std::string Cat::getIdeas(int index)
{
	return (this->_Brain->ideas[index]);
}
void Cat::setBrain(std::string src, int index)
{
	this->_Brain->ideas[index] = src;
}

Cat&    Cat::operator=(const Cat& rhs)
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

void    Cat::makeSound() const
{
    std::cout << "cat say Miaou" << std::endl;
}