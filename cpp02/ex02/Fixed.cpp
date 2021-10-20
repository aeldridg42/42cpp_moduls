#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_v(0) {
}

Fixed::~Fixed( void ) {
}

Fixed::Fixed( const int num ) {
	this->fixed_v = num << Fixed::fr_bits;
}

Fixed::Fixed( const float num ) {
	this->fixed_v = roundf(num * (1 << Fixed::fr_bits));
}

Fixed::Fixed( Fixed const & src ) {
	*this = src;
}

Fixed &		Fixed::operator = (Fixed const & src) {
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
	this->fixed_v = raw;
}

int Fixed::getRawBits( void ) const {
	return (this->fixed_v);
}

std::ostream& operator << (std::ostream &out, const Fixed &point) {
	out << point.toFloat();
	return (out);
}

bool Fixed::operator == (const Fixed & src) const {
	return this->toFloat() == src.toFloat();
}

bool Fixed::operator != (const Fixed & src) const {
	return this->toFloat() != src.toFloat();
}

bool Fixed::operator >= (const Fixed & src) const {
	return this->toFloat() >= src.toFloat();
}

bool Fixed::operator <= (const Fixed & src) const {
	return this->toFloat() <= src.toFloat();
}

bool Fixed::operator > (const Fixed & src) const {
	return this->toFloat() > src.toFloat();
}

bool Fixed::operator < (const Fixed & src) const {
	return this->toFloat() < src.toFloat();
}

Fixed	Fixed::operator + (Fixed const & src) const {
	Fixed temp(*this);
	temp.fixed_v += src.fixed_v;
	return temp;
}

Fixed	Fixed::operator - (Fixed const & src) const {
	Fixed temp(*this);
	temp.fixed_v -= src.fixed_v;
	return temp;
}

Fixed	Fixed::operator * (Fixed const & src) const {
	Fixed temp(*this);
	temp.fixed_v = temp.toFloat() * src.toFloat() * (1 << Fixed::fr_bits);
	return temp;
}

Fixed	Fixed::operator / (Fixed const & src) const {
	Fixed temp(*this);
	temp.fixed_v = temp.toFloat() / src.toFloat() * (1 << Fixed::fr_bits);
	return temp;
}

Fixed &		Fixed::operator ++ ( void ) {
	this->fixed_v++;
	return *this;
}

Fixed &		Fixed::operator -- ( void ) {
	this->fixed_v--;
	return *this;
}

Fixed	Fixed::operator ++ ( int ) {
	Fixed temp(*this);
	this->fixed_v++;
	return temp;
}

Fixed	Fixed::operator -- ( int ) {
	Fixed temp(*this);
	this->fixed_v--;
	return temp;
}

Fixed & Fixed::max ( Fixed & s1, Fixed & s2 ) {
	if (s1 > s2)
		return s1;
	return s2;
}

Fixed & Fixed::min ( Fixed & s1, Fixed & s2 ) {
	if (s1 < s2)
		return s1;
	return s2;
}

const Fixed & Fixed::max ( const Fixed & s1, const Fixed & s2 ) {
	if (s1 > s2)
		return s1;
	return s2;
}

const Fixed & Fixed::min ( const Fixed & s1, const Fixed & s2 ) {
	if (s1 < s2)
		return s1;
	return s2;
}
