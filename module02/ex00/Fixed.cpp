#include "FixedClass.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_N = 0;
}


Fixed::Fixed(const Fixed& nbr)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = nbr;;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return this->_N;
}

void Fixed::setRawBits(int const raw)
{
    this->_N = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_N = rhs.getRawBits();
    return *this;
}
