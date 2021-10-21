#include "Cat.hpp"
#include "Brain.hpp"

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
	*this = src;
	this->brain = NULL;
}

Cat & Cat::operator= ( const Cat & src ) {
	std::cout << "Cat assignation operator have been called" << std::endl;
	if (this != &src) {
		this->type = src.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void Cat::makeSound() {
	std::cout << "Meow-meow" << std::endl;
}

void Cat::getBrainAddress( void ) {
	std::cout << this->brain << std::endl;
}

void Cat::addIdea( std::string idea, int num ) {
	if (num >= 0 && num < 100) {
		this->brain->ideas[num] = idea;
	}
}
std::string Cat::getIdea( int num ) {
	if (num >= 0 && num < 100) {
		return this->brain->ideas[num];
	}
	return NULL;
}
