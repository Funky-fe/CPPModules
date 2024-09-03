#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl() {}

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::getLevel(std::string &level) {
	int i = 0;
	std::string complainLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4) {
		if (level == complainLevel[i])
			return i + 1;
		i++;
	}
	return i + 1;
}

// NO FUCKING WAY QUE USAR COMENTARIOS RESOLVE O ERRO DE COMPILACAO XDDDDD
void Harl::complainFunction(std::string level) {
	switch (getLevel(level))
	{
		case 1:
			debug();
			// fall through
		case 2:
			info();
			// fall through
		case 3:
			warning();
			// fall through
		case 4:
			error();
			break;
		case 5:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}