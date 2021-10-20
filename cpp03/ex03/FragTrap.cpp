#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "default FragTrap constructor have been called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << this->_name << ": FragTrap constructor have been called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << ": FragTrap destructor have been called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << this->_name << ": gives High Five!" << std::endl;
}

FragTrap & FragTrap::operator= ( const FragTrap & src ) {
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	std::cout << this->_name << ": FragTrap assignation operator have been called" << std::endl;
	return *this;
}

FragTrap::FragTrap( const FragTrap & src ) {
	*this = src;
	std::cout << this->_name << ": FragTrap copy constructor have been called" << std::endl;
}

void FragTrap::attack(std::string const & target) {
	std::cout << this->_name << " attacks " << target << " like a FragTrap, causing ";
	std::cout << this->_damage << " points of damage!" << std::endl;
}