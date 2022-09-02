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
                float toFloat(void) const;
                int toInt(void) const;
                int getRawBits(void) const;
                void setRawBits(int const raw);
                static int ft_pow(const int nbr);
                Fixed& operator=(const Fixed& rhs);
                bool operator < (const Fixed& rhs) const;
                bool operator > (const Fixed& rhs) const;
                bool operator <= (const Fixed& rhs) const;
                bool operator >= (const Fixed& rhs) const;
                bool operator != (const Fixed& rhs) const;
                bool operator == (const Fixed& rhs) const;
                Fixed operator + (const Fixed& rhs) const;
                Fixed operator - (const Fixed& rhs) const;
                Fixed operator / (const Fixed& rhs) const;
                Fixed operator * (const Fixed& rhs) const;
                Fixed operator ++ ();
                Fixed operator ++ (int);
                Fixed operator -- ();
                Fixed operator -- (int);
                static float min(Fixed& a, Fixed& b);
		        static float min(const Fixed& a, const Fixed& b);
		        static float max(Fixed& a, Fixed& b);
		        static float max(const Fixed& a, const Fixed& b);
    private:
                int _Nbr;
                static const int _Valeur = 8;

};
std::ostream& operator<<(std::ostream& o, Fixed const & rhs);

#endif
