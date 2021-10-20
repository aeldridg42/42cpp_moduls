#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor have been called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor have been called" << std::endl;
}

Dog::Dog( const Dog & src ) : Animal(src.type) {
	std::cout << "Dog copy constructor have been called" << std::endl;
}

Dog & Dog::operator= ( const Dog & src ) {
	this->type = src.type;
	std::cout << "Dog assignation operator have been called" << std::endl;
	return *this;
}

void Dog::makeSound() {
	std::cout << "Woof-woof!" << std::endl;
}