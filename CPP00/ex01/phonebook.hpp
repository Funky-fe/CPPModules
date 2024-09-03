#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include "contacts.hpp"

class PhoneBook
{
private:
		static const int MAX_CUNT = 8;
		Contact contacts[MAX_CUNT];
		int contactnb;
public:
		PhoneBook();
		
		void		addContact(const Contact& contact);
		void		displayList();
		std::string	Truncate(std::string str);
		void	displayDetails(int index);
};

#endif