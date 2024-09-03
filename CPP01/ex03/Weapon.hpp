#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
public:
		Weapon(std::string weaponType);
		std::string	&getType();
		void		setType(const std::string &newType);

private:
		std::string type;
};

#endif