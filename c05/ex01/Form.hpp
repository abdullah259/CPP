#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form
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

        Form();
        Form(const std::string name, int gSign, int gExec);
        Form(const Form &other);
        ~Form();

        Form &operator=(const Form &rhs);
        const   std::string getName() const;
        bool    getStatus() const;
        int     getSignGrade() const;
        int     getExecuteGrade() const;
        void    beSigned(Bureaucrat b);

};

std::ostream &operator<<(std::ostream &lhs, const Form &rhs);
#endif