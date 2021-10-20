#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Petya");
	ClapTrap b(a);
	ClapTrap c("Vasya");

	a = c;
	c.setName("default");

	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	a.beRepaired(15);
	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
}