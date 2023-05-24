#include "Form.hpp"

// ----------------------------- Constructors ------------------------------ //

Form::Form() : _name("Default"), status(false),  _signGrade(150), _executeGrade(100)
{
    std::cout << "Default form constructor called" << std::endl;
    if (_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const std::string name, int gSign, int gExec) : _name(name), status(false),  _signGrade(gSign), _executeGrade(gExec)
{
    std::cout << "Form constructor called" << std::endl;
    if (gSign < 1 || gExec < 1)
        throw GradeTooHighException();
    else if (gSign > 150 || gExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), status(false),  _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
    std::cout << "Form copy constructor called" << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Form::~Form()
{
	std::cout << "Destructor Called ~Form()" << std::endl;

}
// ------------------------------- Operators ------------------------------- //
Form   & Form::operator=(const Form &rhs)
{
    if (&rhs == this)
        return (*this);
    const_cast<std::string&> (_name) = rhs.getName();
    status = rhs.getStatus();
    const_cast<int &> (_signGrade) = rhs.getSignGrade();
    const_cast<int &> (_executeGrade) = rhs.getExecuteGrade();
    return (*this);
}

std::ostream &operator<<(std::ostream &lhs, const Form &rhs)
{
    lhs << "Form name: " << rhs.getName() << ", signed: ";
    if (rhs.getStatus())
        lhs << "yes";
    else
        lhs << "no";
    lhs << ", grade required to sign: " << rhs.getSignGrade()
       << ", grade required to execute: " << rhs.getExecuteGrade() << std::endl;
    return lhs;
}

// --------------------------- Getters && Setters -------------------------- //

const   std::string Form::getName() const
{
    return (_name);
}

bool    Form::getStatus() const
{
    return (status);
}

int Form::getSignGrade() const
{
    return (_signGrade);
}

int Form::getExecuteGrade() const
{
    return (_executeGrade);
}

// --------------------------------- Methods ------------------------------- //

const char* Form::GradeTooLowException::what() const throw(){return "Grade Too Low";}

const char* Form::GradeTooHighException::what() const throw(){return "Grade Too High";}

void    Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() <= _signGrade) 
        this->status = true;
    else
        throw GradeTooLowException();
}