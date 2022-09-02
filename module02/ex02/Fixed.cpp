#include "FixedClass.hpp"

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->_Nbr = 0;
}

Fixed::Fixed(const int nbr)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_Nbr = nbr << this->_Valeur;
}

Fixed::Fixed(const float nbr)
{
    //std::cout << "Float constructor called" << std::endl;
    setRawBits(std::roundf(nbr * ft_pow(2)));
}

Fixed::Fixed(const Fixed& nbr)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = nbr;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_Nbr;
}

void Fixed::setRawBits(int const raw)
{
    this->_Nbr = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_Nbr) /(ft_pow(2)));
}

int Fixed::toInt(void) const
{
    return (this->_Nbr >> this->_Valeur);
}

int Fixed::ft_pow(const int nbr)
{
    int ret;
    int pow;

    pow = _Valeur;
    ret = nbr;
    while(pow - 1)
    {
        ret *= nbr;
        pow--;
    }
    return ret;
}

float Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

float Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

float Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

float Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return(a.toFloat());
	else
		return(b.toFloat());
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_Nbr = rhs.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return(o);
}
