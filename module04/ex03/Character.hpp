#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
            Character(const  Character&  character);
            Character(std::string const & type = "Unknown");
            Character& operator=(const Character& rhs);
            ~Character();

            std::string const & getName() const;
            void equip(AMateria* m);
            void unequip(int idx);
            void use(int idx, ICharacter& target);

    private:
            static const int _size = 4;
            std::string _name;
            AMateria *_tabMateria[_size];
};

#endif
