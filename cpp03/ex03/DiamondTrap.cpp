#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  ClapTrap("default_clap_name") , _name("default") {
    this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
    std::cout << "default DiamondTrap constructor have been called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name){
    this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
    std::cout << this->_name << ": DiamondTrap constructor have been called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->_name << ": DiamondTrap destructor have been called" << std::endl;
}

DiamondTrap & DiamondTrap::operator= ( const DiamondTrap & src ) {
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	std::cout << this->_name << ": DiamondTrap assignation operator have been called" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) {
	*this = src;
	std::cout << this->_name << ": DiamondTrap copy constructor have been called" << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::_name << std::endl;
}