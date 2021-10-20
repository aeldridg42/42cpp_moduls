#include "Animal.hpp"

Animal::Animal() : type("default") {
	std::cout << "default Animal constructor have been called" << std::endl;
}

Animal::Animal( std::string tp ) : type(tp) {
	std::cout << "Animal constructor have been called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor have been called" <<  std::endl;
}

Animal::Animal(const Animal & src) : type(src.type) {
	std::cout << "Animal copy constructor have been called" << std::endl;
}

Animal & Animal::operator= ( const Animal & src ) {
	this->type = src.type;
	std::cout << "Animal assignation operator have been called" << std::endl;
	return *this;
}

void Animal::makeSound() {
	std::cout << "random Animal sound" << std::endl;
}