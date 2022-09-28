#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class  MutantStack : public std::stack<T>
{
    public:
        MutantStack<T>();
        MutantStack<T>(const MutantStack& src);
        MutantStack<T>& operator=(const MutantStack<T>& rhs);
        ~MutantStack<T>();

        //iterator
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() 
        {
            return this->c.rbegin();
        }
        reverse_iterator rend() 
        {
            return this->c.rend();
        }

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const 
        {
            return this->c.begin();
        }
        const_iterator end() const 
        {
            return this->c.end();
        }
        
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator rbegin() const 
        {
            return this->c.rbegin();
        }
        const_reverse_iterator rend() const 
        {
            return this->c.rend();
        }
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
