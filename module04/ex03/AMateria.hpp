#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{

    public:
        AMateria(const  AMateria&  AMateria);
        AMateria(std::string const & type = "");
        virtual AMateria& operator=(const AMateria& rhs);
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
                std::string p_type;
};

#endif
