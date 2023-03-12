#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Contact
{
	public:
	// ----------------------------- Constructors ------------------------------ //
		Contact(void);
	// ------------------------------ Destructor ------------------------------- //
		~Contact(void);
	// ------------------------------ Methods ------------------------------- //
		int 	index_print;
		void	set_value(std::string info[5]);
		void	get_value();
		void	print_as_row();
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
};
#endif