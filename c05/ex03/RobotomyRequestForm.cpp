#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45) , _target(target)
{
    std::cout << "Constructor Called RobotomyRequestForm()" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) , _target("Default")
{
    std::cout << "Constructor Called RobotomyRequestForm()" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45) , _target(other.getTarget())
{
    std::cout << "Copy Constructor Called RobotomyRequestForm()" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm            &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (&rhs != this)
    {
        this->_target = rhs.getTarget();
    }
    std::cout << "Copy Assignment Operator RobotomyRequestForm()" << std::endl;
    return (*this);
}

void                             RobotomyRequestForm::setTaeget(std::string target){
    this->_target = target;
}

std::string                      RobotomyRequestForm::getTarget()const { return _target ;} 

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getStatus())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
        {
            std::cout << "!!!!!!!!!!!!" << "SOME DRILLING NOISES" << "!!!!!!!!!!!! " << std::endl;
            std::srand(time(0));
            if((std::rand() % 100) < 50)
				std::cout << this->_target << " has been robotomized successfully" << std::endl;
            else
                std::cout << "Faild to robotomize " << this->_target  << std::endl;
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw FormNotSigned();
}