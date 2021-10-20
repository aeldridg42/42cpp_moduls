#include "Zombie.hpp"

int main() {
	Zombie* Horde;
	int N = 50;

	Horde = zombieHorde(N, "Vasya");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}
