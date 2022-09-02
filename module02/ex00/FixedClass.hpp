#ifndef FIXEDCLASS_HPP
# define FIXEDCLASS_HPP
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Fixed
{
    public:
            Fixed();
            Fixed(const Fixed& nbr);
            ~Fixed();
            Fixed& operator=(const Fixed& rhs);
            int getRawBits(void) const;
            void setRawBits(int const raw);
    private:
            int _N;
            static const int _Num = 8;

};

#endif
