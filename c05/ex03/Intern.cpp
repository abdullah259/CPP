#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Calling default Intern constructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
    (void)other;
    std::cout << "Calling Intern copy constructor" << std::endl;
}

Intern &Intern::operator=(const Intern &rhs)
{
    (void)rhs;
    std::cout << "Calling Intern copy assignment constructor" << std::endl;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Calling Intern destructor" << std::endl;
}

AForm*		Intern::makeSh(std::string target){ return new ShrubberyCreationForm(target);}

AForm*		Intern::makeRo(std::string target){ return new RobotomyRequestForm(target);}

AForm*		Intern::makePr(std::string target){ return new PresidentialPardonForm(target);}

AForm   *Intern::makeForm(std::string name_form, std::string target)
{
    std::string formName[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential PardonForm"};

    func    function_pointer[3] = {&Intern::makeSh, &Intern::makeRo, &Intern::makePr};

    const int numForms = 3;

    for (int i = 0; i < numForms; ++i) {
        if (formName[i] == name_form) {
            std::cout << "Intern creates " << name_form << std::endl;
            return ( (this->*function_pointer[i])(target) );
        }
    }
    std::cout << "Error: Form " << name_form << " does not exist" << std::endl;
    return NULL;
}