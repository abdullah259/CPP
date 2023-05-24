#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    
    private:
        const   std::string _name;
        int     _grade;
    public:

        class GradeTooHighException : public std::exception
        {
            const   char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const   char *what() const throw();
        };
        Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &old);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        ~Bureaucrat(void);
        const   std::string getName() const;
        int     getGrade() const;
        void    increGrade();
        void    decreGrade();
        void    signForm(Form &f);
};

std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs);
#endif