#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("tempZombie") {}

Zombie::Zombie(const std::string& name) : name(name) {}

Zombie::~Zombie() {
	std::cout << name << " was destroyed" << std::endl;
} // Destroy deez nuts

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::changeName(std::string newname)
{
	name = newname;
}
