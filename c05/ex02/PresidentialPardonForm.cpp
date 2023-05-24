#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5) , _target(target)
{
    std::cout << "Name Constructor Called PresidentialPardonForm()" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
    std::cout << "Defalut Constructor Called PresidentialPardonForm()" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5), _target(other.getTarget())
{
    std::cout << "Copy Constructor Called PresidentialPardonForm()" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm            &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    if (&rhs != this)
    {
        this->_target = rhs.getTarget();
    }
    std::cout << "Copy Assignment Operator PresidentialPardonForm()" << std::endl;
    return (*this);
}

std::string                      PresidentialPardonForm::getTarget()const { return _target ;}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getStatus())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
            std::cout << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw FormNotSigned();
}