#ifndef ZOMBIECLASS_H
# define ZOMBIECLASS_H
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

class Zombie
{
    public:
            Zombie(std::string name);
            ~Zombie(void);
            void announce(void);
    private:
            std::string _name;
};
#endif
