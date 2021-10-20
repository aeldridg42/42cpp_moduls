#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _health(10), _energy(10), _damage(0) {
	std::cout << this->_name << ": ClapTrap constructor have been called" << std::endl;
}

ClapTrap::ClapTrap() : _name("default"), _health(10), _energy(10), _damage(0) {
	std::cout << "default ClapTrap constructor have been called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << ": ClapTrap destructor have been called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ) {
	*this = src;
	std::cout << this->_name << ": ClapTrap copy constructor have been called" << std::endl;
}

ClapTrap & ClapTrap::operator= ( const ClapTrap & src ) {
	this->_name = src._name;
	this->_health = src._health;
	this->_damage = src._damage;
	this->_energy = src._energy;
	std::cout << this->_name << ": ClapTrap assignation operator have been called" << std::endl;
	return *this;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_health -= amount;
	if (this->_health < 0)
		this->_health = 0;
	std::cout << this->_name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_health += amount;
	std::cout << this->_name << " healed for " << amount << " points!" << std::endl;
}

void ClapTrap::setName( std::string name ) {
	this->_name = name;
}

void ClapTrap::setHealth( int health ) {
	if (health >= 0)
		this->_health = health;
}

void ClapTrap::setEnergy( int energy ) {
	this->_energy = energy;
}

void ClapTrap::setDamage( int damage ) {
	this->_damage = damage;
}

std::string ClapTrap::getName( void ) const {
	return this->_name;
}

int ClapTrap::getHealth( void ) const {
	return this->_health;
}

int ClapTrap::getEnergy( void ) const {
	return this->_energy;
}

int ClapTrap::getDamage( void ) const {
	return this->_damage;
}