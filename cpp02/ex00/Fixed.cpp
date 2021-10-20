#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_v(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &		Fixed::operator = (Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_v = src.getRawBits();
	return *this;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_v = raw;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_v);
}