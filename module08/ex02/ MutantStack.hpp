#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class  MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack& src);
        MutantStack& operator=(const MutantStack& rhs);
        ~MutantStack();


};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src)
{
    *this = src;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& rhs)
{
    if (this != rhs)
    {

    }
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif
