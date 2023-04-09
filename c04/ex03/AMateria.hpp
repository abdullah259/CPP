#ifndef AMATERIA_HPP
# define AMTERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria 
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria &other);
        ~AMateria(void);
        AMateria &operator=(const AMateria &rhs);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif