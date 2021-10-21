#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure( const Cure & src ) {
	*this = src;
}

void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}