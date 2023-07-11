#ifndef SERIALIZER
# define SERIALIZER

#include <iostream>
# include <string>
# include <stdint.h>

struct Data 
{
    int value;
    std::string s1;
};


class Serializer
{
private:
    Serializer(void);
    Serializer(const std::string name);
    Serializer(const Serializer &old);
    Serializer &operator=(const Serializer &rhs);
    ~Serializer(void);
public:
    static uintptr_t  serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};



#endif