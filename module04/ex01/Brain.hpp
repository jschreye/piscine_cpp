#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
        public :
            Brain();
            Brain(const Brain& Brain);
            virtual ~Brain();

            Brain& operator=(const Brain& rhs);

            std::string ideas[100];
};

#endif
