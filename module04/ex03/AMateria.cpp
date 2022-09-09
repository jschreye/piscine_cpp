#include "AMateria.hpp"

AMateria::AMateria(const  AMateria&  AMateria)
{
    std::cout << "copy constructor create" << std::endl;
    *this = AMateria;
}

AMateria::AMateria(std::string const & type) : p_type(type)
{
    std::cout << "init type constructor create" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "destructor create" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->p_type = rhs.p_type;
	return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->p_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "do something to " << target.getName() << std::endl;
}