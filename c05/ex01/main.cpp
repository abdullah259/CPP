#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form        ff;
        Bureaucrat  bb("Abdullah",80);

        std::cout << bb;
        std::cout << ff;
        bb.signForm(ff);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}