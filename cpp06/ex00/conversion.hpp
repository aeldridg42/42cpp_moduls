#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <math.h>
# include <limits>
# include <iomanip>
# include <cstring>

void	stringConversion(char *argv);
void	toChar(std::string value);
void	toInt(std::string value);
void	toFloat(std::string value);
void	toDouble(std::string value);

bool	isChar(char *arg);
bool	isInt(char *arg);
bool	isFloat(char *arg);
bool	isDouble(char *arg);
bool	isSymbs(char *arg);

#endif