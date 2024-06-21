#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad usage, please use ./harlFilter <level>" << std::endl;
		return 1;
	}
	Harl costumer;
	costumer.complainFunction(av[1]);
}