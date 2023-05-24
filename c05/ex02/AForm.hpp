#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm
{
    
    private:
        const       std::string _name;
        bool        status;
        const int   _signGrade;
        const int   _executeGrade;
    public:
        class GradeTooHighException : public std::exception
        {
            const   char *what() const throw(); 
        };
        class GradeTooLowException : public std::exception
        {
            const   char *what() const throw();
        };
        class FormNotSigned : public std::exception
        {
            const   char *what() const throw(); 
        };
        AForm();
        AForm(const std::string name, int gSign, int gExec);
        AForm(const AForm &other);
        ~AForm();

        AForm            &operator=(const AForm &rhs);
        const           std::string getName() const;
        bool            getStatus() const;
        int             getSignGrade() const;
        int             getExecuteGrade() const;
        void            beSigned(Bureaucrat b);
        virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &lhs, const AForm &rhs);
#endif