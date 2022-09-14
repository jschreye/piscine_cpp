#include "Character.hpp"

Character::Character(const  Character&  character)
{
    *this = character;
}

Character::Character(std::string const & type): _name(type)
{
    for(int i = 0; i < Character::_size; i++)
        this->_tabMateria[i] = NULL;
}

Character& Character::operator=(const Character& rhs)
{
	if (&rhs == this)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < Character::_size; i++) {
		if (this->_tabMateria[i])
		{
			delete _tabMateria[i];
			_tabMateria[i] = NULL;
		}
		if (rhs._tabMateria[i])
			_tabMateria[i] = rhs._tabMateria[i]->clone();
	}
	return (*this);   
}

Character::~Character()
{
	for (int i = 0; i < Character::_size; i++)
    {
		if(_tabMateria[i])
			delete _tabMateria[i];
	}
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < Character::_size; i++)
	{
		if (!_tabMateria[i])
		{
			_tabMateria[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= Character::_size)
		return ;
	_tabMateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= Character::_size || !_tabMateria[idx])
		return ;
	_tabMateria[idx]->use(target);
}