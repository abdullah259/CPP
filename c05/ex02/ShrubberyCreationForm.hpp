#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm            &operator=(const ShrubberyCreationForm &rhs);
        std::string                       getTarget() const;
        void                              execute(Bureaucrat const & executor) const;
};

#endif