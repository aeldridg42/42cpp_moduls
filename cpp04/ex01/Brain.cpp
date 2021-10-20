#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor have been called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor have been called" << std::endl;
}

Brain::Brain( const Brain & src ) {
    std::cout << "Brain copy constructor have been called" << std::endl;
    *this = src;
}

Brain & Brain::operator= ( const Brain & src ) {
	std::cout << "Brain assignation operator have been called" << std::endl;
	for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
	return *this;
}

void Brain::addIdea( std::string idea, int num ) {
    this->ideas[num] = idea;
}

std::string Brain::getIdea( int num ) {
    return this->ideas[num];
}