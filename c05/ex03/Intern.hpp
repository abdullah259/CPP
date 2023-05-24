#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern            &operator=(const Intern &rhs);
        AForm             *makeForm(std::string name_form, std::string target);
        AForm*	makeSh(std::string);
		AForm*	makeRo(std::string);
		AForm*	makePr(std::string); 
        typedef AForm *(Intern::*func)(std::string);   
};

#endif