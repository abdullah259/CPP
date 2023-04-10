#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
    private:
        AMateria *LMateria[4];
    public:
        MateriaSource(void);
        MateriaSource(std::string const &name);
        MateriaSource(MateriaSource const & src);   
        MateriaSource & operator=(const MateriaSource& rhs);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif