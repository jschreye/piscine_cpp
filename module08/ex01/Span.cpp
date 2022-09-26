#include "Span.hpp"

Span::Span(unsigned int n): _nMax(n)
{
    this->_nactual = 0;
}

Span::Span(const Span& span)
{
	*this = span;
}

Span& Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        this->_nactual = rhs._nactual;
        this->_nMax = rhs._nMax;
        this->_tab = rhs._tab;
    }
    return (*this);
}

void Span::addNumber(int nbr)
{
    this->_nactual++;
    try
    {
        if (this->_nactual > this->_nMax)
            throw Span::InvalidSizeException();
        else
            this->_tab.push_back(nbr);
    }
    catch(const Span::InvalidSizeException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Span::tritab()
{
    std::sort(this->_tab.begin(), this->_tab.end());
}


int  Span::shortestSpan()
{
    try
    {
        if (this->_nMax <= 1 )
            throw Span::InvalidSizeTabException();
        else
        {
            int tmp = this->_tab[1] - this->_tab[0];
            int tmp1 = this->_tab[1] - this->_tab[0];
            for (unsigned int i = 0; i < this->_nMax; i++)
            {
                if (tmp > tmp1)
                    tmp = this->_tab[i + 1] - this->_tab[i];
                else
                    i++;
            }
            return (tmp);
        }
    }
    catch(const Span::InvalidSizeTabException& e)
    {
        std::cerr << e.what() << '\n';
        exit (0);
    }
    exit (0);
}

int  Span::longestSpan()
{
    try
    {
        if (this->_nMax <= 1 )
             throw Span::InvalidSizeTabException();
        else
            return (this->_tab.back() - this->_tab.front());
    }
    catch(const Span::InvalidSizeTabException& e)
    {
        std::cerr << e.what() << '\n';
        exit (0);
    }
    exit (0);
}

void Span::addNumberWhile(Span& span)
{
    srand(time(NULL));
    for(unsigned int i = 0; i < this->_nMax; i++)
    {
        span.addNumber(rand());
    }
}

const char* Span::InvalidSizeException::what() const throw()
{
	return ("Exception: array is full");
}

const char* Span::InvalidSizeTabException::what() const throw()
{
	return ("it is impossible to display this because it is impossible to compare 0 or 1 value");
}

Span::~Span()
{
}