#ifndef ARRAY
# define ARRAY

#include <iostream>
# include <string>
# include <stdint.h>

template<typename T> 
class Array
{
private:
    unsigned int len;
    T   *element;
public:
    class IndexOutOfBoundsException: public std::exception
    {
        const char* what() const throw()
        {
            return ("Index Out Of Bounds !");
        }
    };
    Array()
    {
        this->len = 0;
        this->element = new T[len];
    }
    Array(unsigned int n)
    {
        this->element = new T[n];
        this->len = n;
    }
    Array(const Array &old)
    {
        this->len = old.len;
        this->element = new T[len];
        for (unsigned int i = 0; i < len; i++)
            this->element[i] = old.element[i];
    }
    Array   &operator=(const Array<T> &rhs)
    {
        if (&rhs != this)
        {
            delete [] this->element;
            this->len = rhs.len;
            this->element = new T[this->len];
            for (unsigned int i = 0; i < len; i++)
                this->element[i] = rhs[i];
        }
        return (*this);
    }
    T	&operator[](unsigned int idx) 
    {
        if(idx >= 0 && static_cast<unsigned int>(idx) < this->len)
            return (element[idx]);
        throw IndexOutOfBoundsException();
    }
    unsigned int   size() const
    {
        return (this->len);
    }
    virtual ~Array() 
    {
        delete [] element;
        std::cout << "desctoruc "<<std::endl;
    }
};


#endif