#ifndef CONTACTS_H
# define CONTACTS_H

# include <string>

class Contact {

public:
	Contact();
	Contact(const std::string firstname, const std::string lastname, 
					const std::string nickname, const std::string phonenumber,
						const std::string secret);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getSecret();

private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string Secret;
};

#endif