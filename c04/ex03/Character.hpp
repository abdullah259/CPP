#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter 
{
    private:
        std::string name;
        AMateria    *inventory[4];
    public:
        Character(void);
        Character(std::string const &name);
        Character(Character const & src);   
        Character & operator=(const Character& rhs);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif