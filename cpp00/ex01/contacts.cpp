#include "contacts.hpp"

Contact::Contact() {}

Contact::Contact(const std::string firstname, const std::string lastname, 
					const std::string nickname, const std::string phonenumber,
						const std::string secret)
	: FirstName(firstname),  LastName(lastname), NickName(nickname), 
	PhoneNumber(phonenumber), Secret(secret) {}

std::string	Contact::getFirstName()
{
	return FirstName;
}

std::string	Contact::getLastName()
{
	return LastName;
}

std::string	Contact::getNickName()
{
	return NickName;
}

std::string	Contact::getPhoneNumber()
{
	return PhoneNumber;
}

std::string	Contact::getSecret()
{
	return Secret;
}
