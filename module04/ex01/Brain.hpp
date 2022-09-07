#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
        public :
            Brain();
            Brain(const Brain& Brain);
            Brain& operator=(const Brain& rhs);
            virtual ~Brain();

            void setIdea(const std::string &idea, int i);
            std::string getIdea(int i);

        private :
            std::string _ideas[100];
};

#endif
