#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public :
            MateriaSource();
            MateriaSource(const  MateriaSource&  materiasource);
            MateriaSource& operator=(const MateriaSource& rhs);
            ~MateriaSource();

            void learnMateria(AMateria* m);
            AMateria* createMateria(std::string const & type);
    
    private :
            static const int _size = 4;
            AMateria *_tabMateria[_size];

};

#endif
