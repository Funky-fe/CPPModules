#include "Zombie.hpp"

void	randomChump(std::string name);

int main()
{
	// tempZombie -> Stack created zombie, 
	//because he was created inside main
	//He will destroyed at the end of main
	Zombie tempZombie;
	Zombie *heapZombie = tempZombie.newZombie("HeapZombie1");
	heapZombie->announce();

	// Created on stack zombies, destroyed after usage
	randomChump("FirstToBeCreated");
	randomChump("SecondToBeCreated");

	heapZombie->changeName("Antonio");
	heapZombie->announce();
	//Delete heap allocated zombies
	delete heapZombie;
}
