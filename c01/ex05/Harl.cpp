#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl Object Created" << std::endl;

}

Harl::~Harl(void)
{
	std::cout << "Harl Object Destoryed" << std::endl;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::wrong()
{
	std::cout << "Invalid Input" << std::endl;
}

void	Harl::complain(std::string line)
{
	void	(Harl::*ptr)() = &Harl::wrong;

	(!line.compare("DEBUG") && (ptr = &Harl::debug));
	(!line.compare("INFO") && (ptr = &Harl::info));
	(!line.compare("WARNING") && (ptr = &Harl::warning));
	(!line.compare("ERROR") && (ptr = &Harl::error));
	(this->*ptr)();
}