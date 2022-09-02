#include "FixedClass.hpp"

bool	Fixed::operator < (const Fixed& rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator > (const Fixed& rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator <= (const Fixed& rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator >= (const Fixed& rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator != (const Fixed& rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

bool	Fixed::operator == (const Fixed& rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

Fixed	Fixed::operator + (const Fixed& rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator - (const Fixed& rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator / (const Fixed& rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator * (const Fixed& rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator ++ ()
{
	++this->_Nbr;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	temp;

	temp._Nbr = this->_Nbr++;
	return (temp);
}

Fixed	Fixed::operator -- ()
{
	--this->_Nbr;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	temp;

	temp._Nbr = this->_Nbr--;
	return (temp);
}
