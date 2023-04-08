#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Animal.hpp"

class Brain
{
    public:
        Brain();
        Brain(const std::string _type);
        Brain(const Brain &other);
        Brain &operator=(const Brain &rhs);
        ~Brain();

        std::string     getidea(int i);
        void            setidea(std::string idea, unsigned int i);
    private:
        std::string ideas[100];
};

#endif