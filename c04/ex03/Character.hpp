#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter 
{
    private:
        std::string name;
        static const int INVENTORY_SIZE = 4;
        static const int MAX_UNEQUIPPED_MATERIAS = 4;
        AMateria    *inventory[INVENTORY_SIZE];
        AMateria* m_unequippedMaterias[MAX_UNEQUIPPED_MATERIAS];
        int m_numUnequippedMaterias;
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