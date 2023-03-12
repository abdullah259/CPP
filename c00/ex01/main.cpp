#include <iostream>
#include "PhoneBook.hpp"

int		check_empty_input(std:: string *info)
{
	int count_space;

	for (size_t i = 0; i < 5; i++)
	{
		count_space = 1;
		for (size_t j = 0; j < info[i].length(); j++)
		{
			if (!isspace(info[i][j]))
				count_space = 0;
		}
		if (info[i].size() == 0 || count_space)
		{
			std::cout << "\033[1;31mEmpty input\033[0m" << std::endl;
			return (1);
		}
	}
	return (0);
}

void	Start_Program(PhoneBook *phonebook)
{
	std::string info_contac[5];

	std::cout << "Enter First Name : ";
	std::getline(std::cin, info_contac[0]);
	std::cout << "Enter Last Name : ";
	std::getline(std::cin, info_contac[1]);
	std::cout << "Enter Nick Name : ";
	std::getline(std::cin, info_contac[2]);
	std::cout << "Enter Phone Number : ";
	std::getline(std::cin, info_contac[3]);
	std::cout << "Enter Darkest Secert : ";
	std::getline(std::cin, info_contac[4]);
	if (!check_empty_input(info_contac))
		phonebook->add_new_cont(info_contac);
}

int main(void)
{
	std::cout << "Choose one of the following commands please : [ADD , SEARCH, EXIT]" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;

	std::string input;
	PhoneBook phonebook;

	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			Start_Program(&phonebook);
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (0);
		else if(std::cin.eof() == 1)
		{
			std::cout << "Ctrl D detected, Exiting the program ...." << std::endl;
			return (0);
		}
		else
			std::cout << "\033[1;31mWrong Command.. Enter One of the following Commands [ADD, SEARCH, EXIT]\033[0m" << std::endl;
		std::cout << "Choose one of the following commands please : [ADD , SEARCH, EXIT]" << std::endl;
	}
	return (0);
}