#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern( const Intern & src ) {
    *this = src;
}

Intern & Intern::operator= ( const Intern & src ) {
    return *this;
}

int get_status( std::string str) {
	int i, j;
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (i = 0, j = 0; i < 4 && j == 0; i++)
		j = str.compare(forms[i]) == 0 ? i + 1 : 0;
	return (j);
}

Form* Intern::makeForm( std::string name, std::string target ) {
    int num = get_status(name);
    switch (num) {
        case 1:
            std::cout << "intern creates " << name << " form" << std::endl;
            return new ShrubberyCreationForm(target);
        case 2:
            std::cout << "intern creates " << name << " form" << std::endl;
            return new RobotomyRequestForm(target);
        case 3:
            std::cout << "intern creates " << name << " form" << std::endl;
            return new PresidentialPardonForm(target);
    }
    std::cout << "form creation error" << std::endl;
    return NULL;
}