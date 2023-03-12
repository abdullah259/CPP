#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "./Contact.hpp"

class PhoneBook {

	public:
	// ----------------------------- Constructors ------------------------------ //
		PhoneBook(void);
	// ------------------------------ Destructor ------------------------------- //
		~PhoneBook(void);
	// ------------------------------ Methods ------------------------------- //
		void	add_new_cont(std::string *info);
		void	print_all_content();
		void	print_content(int index);
		void	search();
	private:
		Contact Contacs[8];
		int 	index;
		int 	all_cont;
};
#endif