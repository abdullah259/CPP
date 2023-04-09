#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    this->_type = "cure";
}

Cure::Cure(std::string const & type) : AMateria("cure")
{
    this->_type = type;
}

Cure::Cure(const Cure &other)
{
    this->_type = other._type;
}

Cure &Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	return (*this);
}

Cure::~Cure(void)
{
}

Cure    *Cure::clone() const {
    Cure *new_cure = new Cure();
    return (new_cure);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
}