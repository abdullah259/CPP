#include "easyfind.hpp"
#include <vector>
#include <list>

int main() 
{
    std::vector<int> v1;
    std::list<int> l1;
    
    for (int i = 1; i <= 5; i++)
        v1.push_back(i);
    for (int i = 1; i <= 5; i++)
        l1.push_back(i);
    int num = 4;
    int num2 = 10;
    try
    {
        std::cout << "Vector : ";
        std::vector<int>::iterator it = easyfind(v1, num);
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "List : ";
        easyfind(l1, num2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what()  << std::endl;
    }
}