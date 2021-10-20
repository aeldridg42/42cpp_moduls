#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {
	this->name = "default";
	this->weapon = NULL;
}

void HumanB::setWeapon( Weapon& weapon ) {
	this->weapon = &weapon;
}

void HumanB::attack( void ) {
	if (!this->weapon)
		std::cout << this->name << " tries to attack, but there is no weapon" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}