#include "Array.hpp"

int main()
{
    try
    {
        Array<int> intArray2(33);
        std::cout << intArray2.size() << std::endl;
        for(unsigned int i = 0; i < 33 ; i++)
        {
            intArray2[i] = i;
        }
        std::cout << intArray2[32] << std::endl;

        std::cout << "---------------------------"<< std::endl;

        Array<int> intArra;
        intArra = intArray2;
        std::cout << intArra.size() << std::endl;
        for(unsigned int i = 0; i < 33 ; i++)
        {
            intArra[i] = i+1;
        }
        std::cout << intArra[32] << std::endl;
        std::cout << intArray2[32] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}