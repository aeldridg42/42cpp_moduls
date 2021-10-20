#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {

}

Point::Point( const Fixed x, const Fixed y) : _x(x), _y(y) {
	
}

Point::Point( Point const & src ) : _x(src.getX()), _y(src.getY()) {

}

Point::~Point() {

}

Point & Point::operator = (Point 	const & src ) {
	std::cout << "It's impossible to assign const values" << std::endl;
	src.getX();
	return *this;
}

const Fixed & Point::getX( void ) const {
	return this->_x;
}

const Fixed & Point::getY( void ) const {
	return this->_y;
}