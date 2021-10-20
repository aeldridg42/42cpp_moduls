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
	*this = src;
}

Dog & Dog::operator= ( const Dog & src ) {
	std::cout << "Dog assignation operator have been called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return *this;
}

void Dog::makeSound() {
	std::cout << "Woof-woof!" << std::endl;
}

void Dog::addIdea( std::string idea, int num ) {
	this->brain->addIdea(idea, num);	
}

std::string Dog::getIdea( int num ) {
	return this->brain->getIdea(num);
}