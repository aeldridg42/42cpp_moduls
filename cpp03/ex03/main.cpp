#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Dima");
	std::cout << std::endl;
	std::cout << "hp: " << a.getHealth() << ", energy: " << a.getEnergy() << ", damage: " << a.getDamage() << std::endl;
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	a.attack("someone");
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
}
