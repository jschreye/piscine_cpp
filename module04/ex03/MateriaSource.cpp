#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MateriaSource::_size; i++)
		_tabMateria[i] = NULL;
}

MateriaSource::MateriaSource(const  MateriaSource&  materiasource)
{
    *this = materiasource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (&rhs == this)
		return (*this);
	for (int i = 0; i < MateriaSource::_size; i++)
	{
		if (rhs._tabMateria[i])
			this->_tabMateria[i] = rhs._tabMateria[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MateriaSource::_size; i++)
		delete _tabMateria[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < MateriaSource::_size; i++)
    {
		if (!_tabMateria[i])
		{
			_tabMateria[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MateriaSource::_size; i++)
    {
		if (_tabMateria[i] && type == _tabMateria[i]->getType())
			return (_tabMateria[i]->clone());
	}
	return NULL;
}