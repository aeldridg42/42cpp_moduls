#include "conversion.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "error: invalid number of args" << std::endl;
	else
		stringConversion(argv[1]);
	return 0;
}