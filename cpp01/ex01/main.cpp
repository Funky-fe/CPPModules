#include "Zombie.hpp"
#include <sstream>


//This function takes a string and a int, takes the
//int and appends it into the base name
//then turns the oss variable into a string

int main()
{
	int N = 9;
	Zombie *horde = zombieHorde(N, "Zombie");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}