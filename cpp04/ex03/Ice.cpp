#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice( const Ice & src ) {
	*this = src;
}

Ice & Ice::operator= ( const Ice & src ) {
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	AMateria *clone = new Ice(*this);
	return clone;
}