#ifndef HARLCLASS_HPP
# define HARLCLASS_HPP
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

class Harl
{
    public:
            Harl();
            ~Harl();
            void complain(std::string level);
    private:
            void _debug(void);
            void _info(void);
            void _warning(void);
            void _error(void);
};


#endif
