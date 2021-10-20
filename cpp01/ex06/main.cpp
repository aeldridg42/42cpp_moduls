#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen = Karen();

	if (argc != 2) {
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}