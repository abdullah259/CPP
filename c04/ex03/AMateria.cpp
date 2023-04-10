#include "AMateria.hpp"

AMateria::AMateria()
{
    _type = "Defalut";
    std::cout << "AMateria Defalut constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    _type = type;
    std::cout << "AMateria parm constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    _type = other._type;
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this == &rhs)
        return (*this);
    _type = rhs._type;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor Called" << std::endl;
}

std::string const   &AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use(ICharacter& target)
{
    (void)target;
}
