#ifndef ZOMBIECLASS_H
# define ZOMBIECLASS_H
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

class Zombie
{
    public:
            Zombie(void);
            ~Zombie(void);
            void announce(void);
            void registrename(std::string name);
    private:
            std::string _name;
};
#endif
