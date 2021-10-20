#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "default ScavTrap constructor have been called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << this->_name << ": ScavTrap constructor have been called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << ": ScavTrap destructor have been called" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << this->_name << ": ScavTrap has entered in Gate keeper mode" << std::endl;
}

ScavTrap & ScavTrap::operator= ( const ScavTrap & src ) {
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_damage = src._damage;
	std::cout << this->_name << ": ScavTrap assignation operator have been called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap( const ScavTrap & src ) {
	*this = src;
	std::cout << this->_name << ": ScavTrap copy constructor have been called" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << this->_name << " attacks " << target << " like a ScavTrap, causing ";
	std::cout << this->_damage << " points of damage!" << std::endl;
}