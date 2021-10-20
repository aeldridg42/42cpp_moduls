#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap a("Petya");
	FragTrap b(a);
	FragTrap c("Vasya");

	a = c;
	c.setName("default");

	std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
    b.attack(a.getName());
	a.takeDamage(b.getDamage());
    std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
    a.beRepaired(15);
    std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
	
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
}
