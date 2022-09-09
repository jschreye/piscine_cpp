#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "constructor create" << std::endl;  
}

Ice::Ice(const  Ice&  ice): AMateria("ice")
{
    std::cout << "copy constructor create" << std::endl;
    *this = ice;
}

Ice& Ice::operator=(const Ice& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    AMateria::operator=(rhs);
    return (*this);
}

Ice::~Ice()
{
    std::cout << "destructor create" << std::endl;  
}

AMateria* Ice::clone() const
{
    AMateria *cloneIce = new Ice();
    return (cloneIce);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
