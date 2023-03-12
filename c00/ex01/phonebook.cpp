#include "./PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
	this->all_cont = 0;
	this->index = 0;
	std::cout << "Phonebook created\n";
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook Destoreyd\n";
}

void	PhoneBook::add_new_cont(std::string *info)
{
	this->Contacs[this->index].set_value(info);
	this->Contacs[this->index].index_print = this->index;
	this->index++;
	if(this->all_cont < 8)
		this->all_cont++;
	if (this->index == 8)
		this->index = 0;
}

void	PhoneBook::print_content(int index)
{
	if (index < this->all_cont && index >= 0)
		this->Contacs[index].get_value();
	else
		std::cout << "\033[1;31mThis index out of range\033[0m" << std::endl;
}

void	PhoneBook::print_all_content()
{
	const std::string RED_BOLD = "\033[1;31m";
	const std::string DEFAULT_COLOR = "\033[0m";

	std::cout << "|"
          << RED_BOLD << std::setw(10) << "Index" << DEFAULT_COLOR << "|"
          << RED_BOLD << std::setw(10) << "First Name" << DEFAULT_COLOR << "|"
          << RED_BOLD << std::setw(10) << "Last Name" << DEFAULT_COLOR << "|"
          << RED_BOLD << std::setw(10) << "Nick Name" << DEFAULT_COLOR << "|"
          << std::endl;
	for(int i = 0; i < this->all_cont; i++)
		this->Contacs[i].print_as_row();
}

void	PhoneBook::search()
{
	std::string inp;
	int index;

	this->print_all_content();
	std::cout << "Chose an index to print:";
	std::getline (std::cin, inp);
	if(std::cin.eof() == 1)
	{
		std::cout << "Ctrl D detected, Exiting the program ...." << std::endl;
		return ;
	}
	if(inp.size() == 0 || inp.size() > 1)
	{
		std::cout << "Wrong Index" << std::endl;
		return ;
	}
	for(int j = 0; j < (int)inp.size() ;j++)
	{
		if(!isdigit(inp[j]))
		{	std::cout << "Only numbers" << std::endl;
			return ;
		}
	}
	index = atoi(inp.c_str());
	this->print_content(index);
}