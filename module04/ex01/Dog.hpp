#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :
            Dog();
            Dog(const Dog& Dog);
            ~Dog();

            Dog& operator=(const Dog& rhs);
            void makeSound() const;
    private :
            Brain* _Brain;
};

#endif
