#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :
                Cat();
                Cat(const Cat& Cat);
                ~Cat();

                Cat& operator=(const Cat& rhs);
                void makeSound() const;
                std::string getIdeas(int index);
                void setBrain(std::string &src, int index);
    private :
            Brain* _Brain;

};

#endif
