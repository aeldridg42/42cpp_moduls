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

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed &	operator = (const Fixed & src);
	
	bool operator == (const Fixed & src) const;
	bool operator != (const Fixed & src) const;
	bool operator >= (const Fixed & src) const;
	bool operator <= (const Fixed & src) const;
	bool operator > (const Fixed & src) const;
	bool operator < (const Fixed & src) const;

	Fixed operator - (const Fixed & src) const;
	Fixed operator + (const Fixed & src) const;
	Fixed operator / (const Fixed & src) const;
	Fixed operator * (const Fixed & src) const;

	Fixed & operator ++ ( void );
	Fixed & operator -- ( void );
	Fixed operator ++ ( int );
	Fixed operator -- ( int );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	static Fixed & max ( Fixed & s1, Fixed & s2 );
	static Fixed & min ( Fixed & s1, Fixed & s2 );
	static const Fixed & max ( const Fixed & s1, const Fixed & s2 );
	static const Fixed & min ( const Fixed & s1, const Fixed & s2 );
};

std::ostream& operator << (std::ostream &out, const Fixed &point);

#endif