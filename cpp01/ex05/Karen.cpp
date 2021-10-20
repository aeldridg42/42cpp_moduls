#include "Karen.hpp"

int get_status( std::string str) {
	int i, j;
	std::string tmp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0, j = 0; i < 4 && j == 0; i++)
		j = str.compare(tmp[i]) == 0 ? i + 1 : 0;
	return (j);
}

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << std::endl << " I just love it!" << std::endl;
}

void Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! ";
	std::cout << std::endl << "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::def( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::complain( std::string level ) {
	int num = get_status(level);
	switch (num) {
		case 1:
			this->debug();
			break ;
		case 2:
			this->info();
			break ;
		case 3:
			this->warning();
			break ;
		case 4:
			this->error();
			break ;
		default:
			this->def();
	}
}
