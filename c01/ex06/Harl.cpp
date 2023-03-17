#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl Object Created" << std::endl;

}

Harl::~Harl(void)
{
	std::cout << "Harl Object Destoryed" << std::endl;
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::wrong()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain(std::string line)
{
	void	(Harl::*ptr)() = &Harl::wrong;
	int i = 0;

	(!line.compare("DEBUG") && (i = 1));
	(!line.compare("INFO") && (i = 2));
	(!line.compare("WARNING") && (i = 3));
	(!line.compare("ERROR") && (i = 4));

	switch (i)
	{
		case 1:
			ptr = &Harl::debug;
			(this->*ptr)();
			break;
		case 2:
			ptr = &Harl::info;
			(this->*ptr)();
			break;
		case 3:
			ptr = &Harl::warning;
			(this->*ptr)();
			break;
		case 4:
			ptr = &Harl::error;
			(this->*ptr)();
			break;
		default:
			ptr = &Harl::wrong;
			(this->*ptr)();
			break;
	}
}