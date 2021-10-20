#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_v(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_v = num << Fixed::fr_bits;
}

Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_v = roundf(num * (1 << Fixed::fr_bits));
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &		Fixed::operator = (Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_v = src.fixed_v;
	return *this;
}

float Fixed::toFloat( void ) const {
	return (this->fixed_v / (float)(1 << Fixed::fr_bits));
}

int Fixed::toInt( void ) const {
	return (this->fixed_v >> fr_bits);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_v = raw;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_v);
}

std::ostream& operator<< (std::ostream &out, const Fixed &point) {
	out << point.toFloat();
	return (out);
}