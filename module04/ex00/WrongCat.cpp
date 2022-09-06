#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << getType() << " create" << std::endl;
}

WrongCat::WrongCat(const WrongCat& WrongCat)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = WrongCat;
}

WrongCat::~WrongCat()
{

}

WrongCat&    WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "cat say MMMiiiiiiiaaaaaaaoooooouuuuu" << std::endl;
}