#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

private:
	int fixed_v;
	static const int fr_bits = 8;

public:
	Fixed( void );
	Fixed( const float num );
	Fixed( const int num );
	~Fixed( void );
	Fixed( Fixed const & src );

	Fixed &		operator = (const Fixed & src);
	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream &out, const Fixed &point);

#endif
