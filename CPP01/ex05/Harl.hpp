#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
public:
	Harl();
	void	complain(std::string level);

private:
		static const int	complains = 4;
		std::string	complainLevel[complains];
		void	(Harl::*complainFunctions[complains])();

		void	debug();
		void	info();
		void	warning();
		void	error();
};

#endif