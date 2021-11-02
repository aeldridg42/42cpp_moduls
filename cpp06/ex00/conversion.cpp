#include "conversion.hpp"

void	toChar(double value)
{
	std::cout << "char: ";

	if (value >= 32 && value <= 126)
		std::cout << "\'" << static_cast<char>(value) << "\'" << std::endl;
	else if (value < 0 || value > 127 || isnan(value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	toInt(double value)
{
	std::cout << "int: ";

	if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(value) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	toFloat(double value)
{
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void	toDouble(double value)
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << value << std::endl;
}

void	impossible( void ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	exit(1);
}

void	stringConversion(char *argv)
{
	int i;
	double value = 0.0;
	char *pEnd;
    bool ((*funcs[5]))(char *arg) = {isChar, isInt, isFloat, isDouble, isSymbs};

	for (i = 0; i < 5 && !funcs[i](argv); i++);
	if (i == 0)
		value = static_cast<double>(*argv);
	else if (i < 5)
		value = strtod(argv, &pEnd);
	else
		impossible();
	toChar(value);
	toInt(value);
	toFloat(value);
	toDouble(value);
}
