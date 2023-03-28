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
    std::cout << "Copy constructor called " << std::endl;
    *this = object_cpy;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" <<std::endl;
    value = num << fr_bit;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf((num * (1 << fr_bit)));
}

Fixed   &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
        this->value = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs)
{
    lhs << rhs.toFloat();
    return lhs;
}

int     Fixed::toInt() const
{
    return (value >> fr_bit);
}

float   Fixed::toFloat() const
{
    return((float)value / (1 << fr_bit));
}

void    Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

int     Fixed::getRawBits( void ) const
{
    return this->value;
}

