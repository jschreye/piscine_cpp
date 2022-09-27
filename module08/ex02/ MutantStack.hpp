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
MutantStack<T>::MutantStack(): std::stack<T>()
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
    std::stack<T>::operator=(rhs);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif
