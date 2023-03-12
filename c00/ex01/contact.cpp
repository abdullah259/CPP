#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->index_print = 0;
}

Contact::~Contact(void) {return ;}

void	Contact::set_value(std::string info[5])
{
	this->firstname = info[0];
	this->lastname = info[1];
	this->nickname = info[2];
	this->phonenumber = info[3];
	this->darkestsecret = info[4];
}

void	Contact::get_value()
{
	std::cout << "First Name     --> " << firstname << std::endl;
	std::cout << "Last Name      --> " << lastname << std::endl;
	std::cout << "Nick Name      --> " << nickname << std::endl;
	std::cout << "Phone Number   --> " << phonenumber << std::endl;
	std::cout << "Darkest Secret --> " << darkestsecret << std::endl;
}

void	Contact::print_as_row()
{
	std::cout << "|" << std::setw(10) << this->index_print;
	int size = this->firstname.size();
	if(size > 10)
		std::cout << "|" << std::setw(9) << firstname.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << firstname;
	size = this->lastname.size();
	if(size > 10)
		std::cout << "|" << std::setw(9) << lastname.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << lastname;
	size = this->nickname.size();
	if(size > 10)
		std::cout << "|" << std::setw(9) << nickname.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << nickname;
	std::cout << "|" << std::endl;
}
