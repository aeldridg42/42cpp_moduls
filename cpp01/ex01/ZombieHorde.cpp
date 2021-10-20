#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* horde = NULL;
	if (N < 1)
		std::cout << "N is not valid" << std::endl;
	else {
		horde = new Zombie[N];
		for (int i = 0; i < N; i++) {
			horde[i].setname(name);
		}
	}
	return (horde);
}
