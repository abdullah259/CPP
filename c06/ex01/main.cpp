#include "Serializer.hpp"


int main()
{
    Data    data;

    uintptr_t nn = Serializer::serialize(&data);

    Data    *copy;

    copy = Serializer::deserialize(nn);
    

    if (copy == &data)
        std::cout << "it is compare" << " this is copy " <<  copy << " this is data " << &data << std::endl;
    else
        std::cout << "it is not compare" << std::endl;
}