#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    Bureaucrat b = Bureaucrat("bob", 137);
	Bureaucrat c = Bureaucrat("christina", 1);
	ShrubberyCreationForm shrubForm("home");
	RobotomyRequestForm robotomyForm("Elliot");
	PresidentialPardonForm presForm("Jon");

	// Cannot execute without signing
	b.executeForm(shrubForm);

	// Shrubbery form
	b.signForm(shrubForm);
	b.executeForm(shrubForm);

	// Robotomy form
	c.signForm(robotomyForm);
	c.executeForm(robotomyForm);

	// Grade too low
	b.signForm(presForm);
	b.executeForm(presForm);

	// Presidential pardon form
	c.signForm(presForm);
	c.executeForm(presForm);
}