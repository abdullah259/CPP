#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  bb("Abdullah",150);
        Bureaucrat  cc = bb;

        cc.decreGrade();
        std::cout << cc.getGrade() << std::endl;
        std::cout << cc;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}