#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

class Fixed
{
private:    
	int value;
    static const int fr_bit = 8;
public:
	Fixed(); // Default Constartcotr
    Fixed(const Fixed &other); // Copy Concstrucotr
    Fixed(const int num); // Concstrucotr intger
    Fixed(const float num);
	~Fixed();  // destoryed
    Fixed &operator=(const Fixed& other); // copy assigned construcotr

    int toInt( void ) const;
    float toFloat( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs);

#endif