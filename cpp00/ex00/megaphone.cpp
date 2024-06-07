#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string argument = av[i];
			for (std::size_t j = 0; j < argument.length(); j++)
				argument[j] = std::toupper(static_cast<unsigned char>(argument[j]));
			std::cout << argument;
		}
		std::cout << std::endl;
	}
	return (0);
}
