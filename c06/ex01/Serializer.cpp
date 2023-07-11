#include "Serializer.hpp"

Serializer::Serializer(void)
{
}


Serializer::Serializer(const std::string name)
{
    (void)name;
}


Serializer::Serializer(Serializer const & src)
{
	*this = src;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	(void)rhs;
	return *this;
}


uintptr_t   Serializer::serialize(Data* ptr)
{
    ptr->s1 = "abdulla";
    ptr->value = 44;

    return reinterpret_cast< uintptr_t> (ptr);
}


Data    *Serializer::deserialize(uintptr_t raw)
{   
    Data *data = reinterpret_cast<Data *>(raw);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "value: " << data->value << std::endl;
    
    return data;
}