#include "ScavTrap.hpp"

int main() {
	ScavTrap a("Petya");
	ScavTrap b(a);
	ScavTrap c("Vasya");

	a = c;
	c.setName("default");

	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	a.beRepaired(15);
	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
}
