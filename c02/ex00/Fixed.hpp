#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>


class Fixed
{
private:
	int value;
    static const int fr_bit = 8;
public:
	Fixed(); // Default Constartcotr
    Fixed (const Fixed &other); // Copy Concstrucotr
	~Fixed();  // destoryed
    Fixed &operator=(const Fixed& other); // copy assigned construcotr

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif