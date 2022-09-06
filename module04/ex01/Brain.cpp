#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain& Brain)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Brain;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{	
		for(size_t i = 0; i < ideas->size(); i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
    return ;
}