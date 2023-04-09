#include "ICe.hpp"

Ice::Ice() : AMateria()
{
    this->_type = "cure";
}

Ice::Ice(std::string const & type) : AMateria("cure")
{
    this->_type = type;
}

Ice::Ice(const Ice &other)
{
    this->_type = other._type;
}

Ice &Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return (*this);
}

Ice::~Ice(void)
{
}

Ice    *Ice::clone() const {
    Ice *new_cure = new Ice();
    return (new_cure);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}