#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default Constructer Called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
	// std::cout <<  "Destructor Called" << std::endl;
}


Fixed::Fixed(const Fixed & object_cpy)
{
    // std::cout << "Copy constructor called " << std::endl;
    *this = object_cpy;
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" <<std::endl;
    value = num << fr_bit;
}

Fixed::Fixed(const float num)
{
    // std::cout << "Float constructor called" << std::endl;
    value = roundf((num * (1 << fr_bit)));
}

Fixed   &Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
        this->value = other.getRawBits();
    return *this;
}

Fixed   &Fixed::min(Fixed &lhs, Fixed &rhs)
{
    if (lhs < rhs)
        return lhs;
    return (rhs);
}

Fixed const &Fixed::min(Fixed const  &lhs, Fixed const &rhs)
{
    if (lhs < rhs)
        return lhs;
    return (rhs);
}

Fixed   &Fixed::max(Fixed &lhs, Fixed &rhs)
{
    if (lhs > rhs)
        return (lhs);
    return (rhs);
}

Fixed const &Fixed::max(Fixed const  &lhs, Fixed const &rhs)
{
    if (lhs > rhs)
        return (lhs);
    return (rhs);
}

std::ostream &operator<<(std::ostream &lhs, const Fixed &rhs)
{
    lhs << rhs.toFloat();
    return lhs;
}

Fixed	Fixed::operator+(const Fixed other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool    Fixed::operator==(const Fixed &other)
{
    if (this->value == other.value)
        return (true);
    return (false);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
    return (this->value > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
    return (this->value < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
    return (this->value >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
    return (this->value <= rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
    return (this->value != rhs.getRawBits());
}

Fixed &Fixed::operator++()
{
    ++value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;

    value++;
    return (temp);
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

