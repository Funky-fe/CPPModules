#include "phonebook.hpp"
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook()
	:	contactnb(0) {};

void	PhoneBook::addContact(const Contact& contact)
{
	if (contactnb >= MAX_CUNT)
	{
		for (int i = 0; i < contactnb; i++)
			contacts[i] = contacts[i + 1];
		contactnb--;
	}
	contacts[contactnb++] = contact;
}

void	PhoneBook::displayList()
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "NickName" << "|" << std::endl;
	
	for (int i = 0; i < contactnb; i++)
	{
		std::cout << std::setw(10) << i << "|"
		<< std::setw(10) << Truncate(contacts[i].getFirstName()) << "|"
		<< std::setw(10) << Truncate(contacts[i].getLastName()) << "|" 
		<< std::setw(10) << Truncate(contacts[i].getNickName()) << "|" << std::endl;
	}
}

void	PhoneBook::displayDetails(int index)
{
	if (index < 0 || index >= contactnb)
	{
		std::cout << "This index doesn't exist";
		return ;
	}
	Contact contact = contacts[index];

	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "NickName: " << contact.getNickName() << std::endl;
	std::cout << "PhoneNumber: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getSecret() << std::endl;
}

std::string	PhoneBook::Truncate(std::string str)
{
	if (str.length() <= 10)
		return str;
	else
		return (str.substr(0, 9) + ".");
}