#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        RobotomyRequestForm            &operator=(const RobotomyRequestForm &rhs);
        std::string                       getTarget() const;
        void                              setTaeget(std::string target);
        void                              execute(Bureaucrat const & executor) const;
};

#endif