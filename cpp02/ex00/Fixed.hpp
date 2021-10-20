#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

private:
	int fixed_v;
	static const int fr_bits = 8;

public:
	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const & src );

	Fixed &		operator = (const Fixed & src);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif