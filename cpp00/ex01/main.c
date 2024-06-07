#include "phonebook.hpp"

int	main()
{
	PhoneBook phonebook;
	while(true)
	{
		std::string cmd;
		std::cout << "Choose a command <ADD> <SEARCH> <EXIT>" << std::endl;
		std::cin >> cmd;

		if (cmd == "ADD")
		{
			std::string firstname, lastname, nickname, phonenumber, secret;

			std::cout << "Insert First Name: ";
			std::cin >> firstname;

			std::cout << "Insert Last Name: ";
			std::cin >> lastname;

			std::cout << "Insert Nickname: ";
			std::cin >> nickname;

			std::cout << "Insert PhoneNumber: ";
			bool validnumber = false;
			while (!validnumber)
			{
				std::cin >> phonenumber;

				if ((phonenumber.find_first_not_of("0123456789") == std::string::npos))
					validnumber = true;
				if (!validnumber)
					std::cout << "The PhoneNumber should only contain digits. Try again: ";
			}
			std::cout << "Tell us the DarkestSecret: ";
			std::cin.ignore();
			std::getline(std::cin, secret);
			Contact newContact(firstname, lastname, nickname, phonenumber, secret);
			phonebook.addContact(newContact);
		}
		else if (cmd == "SEARCH")
		{
			phonebook.displayList();
			int	index = 0;
			std::cout << "Select the contact indext for details: ";
			std::cin >> index;
			phonebook.displayDetails(index);
		}
		else if (cmd == "EXIT")
			break;
	}
}