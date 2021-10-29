#include "conversion.hpp"

void	toChar(double value)
{
	std::cout << "char: ";

	if (value >= 32 && value <= 126)
		std::cout << "\'" << static_cast<char>(value) << "\'" << std::endl;
	else if (value < 0 || value > 127 || std::isnan(value))
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
	std::cout << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

void	stringConversion(char *argv)
{
	double value;
	char *pEnd;
	if (strlen(argv) == 1 && !std::isdigit(*argv))
		value = static_cast<double>(*argv);
	else
		value = strtod(argv, &pEnd);
	toChar(value);
	toInt(value);
	toFloat(value);
	toDouble(value);
}
