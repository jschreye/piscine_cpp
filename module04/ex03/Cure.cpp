#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "constructor create" << std::endl;  
}

Cure::Cure(const  Cure&  Cure): AMateria("cure")
{
    std::cout << "copy constructor create" << std::endl;
    *this = Cure;
}

Cure& Cure::operator=(const Cure& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    AMateria::operator=(rhs);
    return (*this);
}

Cure::~Cure()
{
    std::cout << "destructor create" << std::endl;  
}

AMateria* Cure::clone() const
{
    AMateria *cloneCure = new Cure();
    return (cloneCure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
