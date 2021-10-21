#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor have been called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor have been called" << std::endl;
	delete this->brain;
}

Dog::Dog( const Dog & src ) {
	std::cout << "Dog copy constructor have been called" << std::endl;
	this->brain = NULL;
	*this = src;
}

Dog & Dog::operator= ( const Dog & src ) {
	std::cout << "Dog assignation operator have been called" << std::endl;
	if (this != &src) {
		this->type = src.type;
        // this->brain = src.brain;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void Dog::makeSound() {
	std::cout << "Woof-woof!" << std::endl;
}

void Dog::getBrainAddress( void ) {
	std::cout << this->brain << std::endl;
}

void Dog::addIdea( std::string idea, int num ) {
	if (num >= 0 && num < 100) {
		this->brain->ideas[num] = idea;
	}
}
std::string Dog::getIdea( int num ) {
	if (num >= 0 && num < 100) {
		return this->brain->ideas[num];
	}
	return NULL;
}