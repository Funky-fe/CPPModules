#include "Zombie.hpp"
#include <iostream>
#include <sstream>


Zombie::Zombie() {}

Zombie::Zombie(std::string newname) : name(newname) {}

Zombie::~Zombie() {
	std::cout << name << " was destroyed." << std::endl;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}