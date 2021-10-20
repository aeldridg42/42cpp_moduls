#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point( const Fixed x, const Fixed y );
	Point( Point const & src );
	~Point();

	const Fixed & getX( void ) const;
	const Fixed & getY( void ) const;
	Point & operator = ( Point const & src );
};

#endif