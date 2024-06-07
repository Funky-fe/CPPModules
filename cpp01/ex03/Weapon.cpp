#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType) {}

std::string	&Weapon::getType() {
	return type;
}

void	Weapon::setType(const std::string &newType) {
	type = newType;
}