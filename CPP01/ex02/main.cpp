#include <string>
#include <iostream>

int	main() {

	//A string variable initialized to "HI THIS IS BRAIN".
	std::string mainString = "HI THIS IS BRAIN";
	//stringPTR: A pointer to the string.
	std::string *stringPTR = &mainString;
	//stringREF: A reference to the string.
	std::string &stringREF = mainString;

	//The memory address of the string variable.
	std::cout << "The memory address of the string variable: " << &mainString << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << mainString << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}