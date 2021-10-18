#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->setHealth(100);
    this->setEnergy(50);
    this->setDamage(20);
    std::cout << "default ScavTrap constructor have been called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    this->setHealth(100);
    this->setEnergy(50);
    this->setDamage(20);
    std::cout << this->getName() << ": ScavTrap constructor have been called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << this->getName() << ": ScavTrap destructor have been called" << std::endl;
}