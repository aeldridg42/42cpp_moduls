#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Petya");
    ClapTrap b;
    ClapTrap c(b);

    b = a;

    a.attack("Vasya");
    a.setDamage(10);
    a.attack("Vasya2");
    std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
    a.takeDamage(6);
    std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
    a.beRepaired(15);
    std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
}