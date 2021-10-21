#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice( const Ice & src ) {
	*this = src;
}

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}