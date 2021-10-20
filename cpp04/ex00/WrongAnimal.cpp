#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default") {
	std::cout << "default WrongAnimal constructor have been called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string tp ) : type(tp) {
	std::cout << "WrongAnimal constructor have been called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor have been called" <<  std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src) : type(src.type) {
	std::cout << "WrongAnimal copy constructor have been called" << std::endl;
}

WrongAnimal & WrongAnimal::operator= ( const WrongAnimal & src ) {
	this->type = src.type;
	std::cout << "WrongAnimal assignation operator have been called" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() {
	std::cout << "random WrongAnimal sound" << std::endl;
}