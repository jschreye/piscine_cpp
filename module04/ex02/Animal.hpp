#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class AAnimal
{
        public :
            AAnimal();
            AAnimal(const AAnimal& animal);
            virtual ~AAnimal();

            void setType(std::string const name);
            std::string getType() const;
            
            virtual void makeSound() const = 0;
            AAnimal& operator=(const AAnimal& rhs);

        protected :
            std::string _type;
};

#endif
