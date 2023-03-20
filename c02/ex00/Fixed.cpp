#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructer Called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
	std::cout <<  "Destructor Called" << std::endl;
}


Fixed::Fixed(const Fixed & object_cpy)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = object_cpy;
}

Fixed   &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->value = other.getRawBits();
    return *this;
}

void    Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called" << std::endl;
    this->value = raw;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

