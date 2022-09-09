#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
        public :
            WrongAnimal();
            WrongAnimal(const WrongAnimal& WrongAnimal);
            virtual ~WrongAnimal();

            void setType(std::string const name);
            std::string getType() const;
            
            void makeSound() const;
            WrongAnimal& operator=(const WrongAnimal& rhs);

        protected :
            std::string _type;
};

#endif
