#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("unammed"), _grade(150)
{
	std::cout << "Default Constructor Called Bureaucrat()"  << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old) : _name(old._name), _grade(old._grade)
{
	std::cout << "Copy Constructor Called Bureaucrat()" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if(grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
    std::cout << "Named Bureaucrat constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if (&rhs == this)
    {
        return (*this);
    }
	_grade = rhs.getGrade();
	const_cast<std::string&> (_name) = rhs.getName();
	std::cout << "Copy Assignment Operator Bureaucrat()" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

void    Bureaucrat::increGrade()
{
    if (_grade == -1)
        throw GradeTooHighException();
    else
        _grade -= 1;
}

void    Bureaucrat::decreGrade()
{
    if (_grade > 150)
        throw GradeTooLowException();
    else
        _grade += 1;
}

std::ostream &operator<<(std::ostream &lhs, const Bureaucrat &rhs)
{
    lhs << rhs.getName() << " ,  bureaucrat grade " << rhs.getGrade() << std::endl;
    return lhs;
}

const   std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

const   char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const   char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}