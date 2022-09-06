#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
        public :
            Animal();
            Animal(const Animal& animal);
            Animal& operator=(const Animal& rhs);
            virtual ~Animal();
            void setType(std::string const name);
            std::string getType() const;
            virtual void makeSound() const;

        protected :
            std::string _type;
};

#endif
