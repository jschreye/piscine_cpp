#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; ++i)
		this->_ideas[i] = "it's empty for this moment";
	std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain& Brain)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Brain;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs)
	{	
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	//delete this->_ideas;
	std::cout << "Brain destructed" << std::endl;
}


std::string Brain::getIdea(int i)
{
	if (i < 0 || i >= 100)
		return "";
	return _ideas[i];
}

void Brain::setIdea(const std::string &idea, int i)
{
	if (i < 0 || i >= 100)
		return ;
	this->_ideas[i] = idea;
}