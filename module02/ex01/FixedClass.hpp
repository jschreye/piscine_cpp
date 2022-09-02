#ifndef FIXEDCLASS_HPP
# define FIXEDCLASS_HPP
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
    public:
                Fixed();
                Fixed(const int nbr);
                Fixed(const float nbr);
                Fixed(const Fixed& nbr);
                ~Fixed();
                Fixed& operator=(const Fixed& rhs);
                float toFloat(void) const;
                int toInt(void) const;
                int getRawBits(void) const;
                void setRawBits(int const raw);
                static int ft_pow(const int nbr);
    private:
                int _Nbr;
                static const int _Valeur = 8;

};
std::ostream& operator<<(std::ostream& o, Fixed const & rhs);

#endif
