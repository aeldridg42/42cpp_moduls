#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor have been called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor have been called" << std::endl;
	delete this->brain;
}

Cat::Cat( const Cat & src ) : Animal(src.type) {
	std::cout << "Cat copy constructor have been called" << std::endl;
}

Cat & Cat::operator= ( const Cat & src ) {
	this->type = src.type;
	std::cout << "Cat assignation operator have been called" << std::endl;
	return *this;
}

void Cat::makeSound() {
	std::cout << "Meow-meow" << std::endl;
}