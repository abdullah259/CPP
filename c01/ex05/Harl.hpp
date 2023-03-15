#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Harl
{
	public:
		Harl();
		~Harl(void);
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	wrong(void);
};


#endif