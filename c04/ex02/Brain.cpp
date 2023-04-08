#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Defalut constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    
}

Brain  &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain copy assignment constructor called" << std::endl;
    if (&rhs != this)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = rhs.ideas[i];
        }   
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor Called" << std::endl;
}

std::string     Brain::getidea(int i)
{
    return (this->ideas[i]);
}

void            Brain::setidea(std::string idea, unsigned int i)
{
    this->ideas[i] = idea;
}