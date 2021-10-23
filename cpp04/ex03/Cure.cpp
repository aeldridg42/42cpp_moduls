#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::Cure( const Cure & src ) {
	*this = src;
}

Cure & Cure::operator= (Cure const & src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	AMateria *clone = new Cure(*this);
	return clone;
}
