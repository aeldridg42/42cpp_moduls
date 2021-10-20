#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) {
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA() {
	this->name = "default";
	this->weapon = NULL;
}

void HumanA::attack( void ) {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}