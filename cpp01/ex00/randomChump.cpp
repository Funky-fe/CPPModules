#include "Zombie.hpp"

// Zombies created here, will be destroyed after announce
void	randomChump(std::string name)
{
	Zombie randomZombie(name);
	randomZombie.announce();
}
