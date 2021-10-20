#include "Zombie.hpp"

int main() {
    Zombie* zomb = newZombie("Vasya");
    zomb->announce();
    randomChump("Petya");
    delete zomb;
    return (0);
}