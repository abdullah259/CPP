#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "AForm.hpp"

// class Bureaucrat;


class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm            &operator=(const PresidentialPardonForm &rhs);
        void                              setTaeget(std::string target);
        std::string                       getTarget() const;
        void                              execute(Bureaucrat const & executor) const;
};

#endif