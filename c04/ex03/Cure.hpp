#ifndef CURE_HPP
# define CURE_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(std::string const & type);
        Cure(const Cure &other);
        Cure &operator=(const Cure &rhs);
        ~Cure(void);
        Cure *clone() const;
        void    use(ICharacter& target);
};

#endif