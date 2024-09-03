#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

// Looks for the occurence of s1, if not found, pos = std::string::npos
// If found, erase the s1, swaps it with s2, then try to find again s1, from the new s2
// Loops stops when cant find a new occurence.
void replaceString(std::string& content, const std::string& s1, const std::string& s2)
{
	size_t pos = content.find(s1);
	while(pos != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos = content.find(s1, pos + s2.length());
	}
}


int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Wrong usage, try using ./" << av[0] << " <filename> <s1> <s2>." << std::endl;
		return (0);
	}
	//open the file on "readfile" variable
	std::ifstream readFile(av[1]);
	if (!readFile) {
		std::cerr << "Error opening " << av[1] << std::endl;
		return (0);
	}

	//Create a variable to store the content of the inputfile and close it.
	std::ostringstream buffer;
	buffer << readFile.rdbuf();
	readFile.close();

	// content will recieve the text and update to the new one
	std::string	content = buffer.str();
	replaceString(content, av[2], av[3]);

	std::ofstream outFile((std::string(av[1]) + ".replace").c_str());
	if (!outFile) {
		std::cerr << "Error creating .replace file" << std::endl;
		return (0);
	}

	outFile << content;
	outFile.close();

	return (0);
}