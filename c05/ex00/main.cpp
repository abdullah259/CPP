#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  bb("Abdullah",1);
        Bureaucrat  cc = bb;

        cc.increGrade();
        cc.decreGrade();
        std::cout << cc.getGrade() << std::endl;
        std::cout << cc << bb;
        // std::cout << bb;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}