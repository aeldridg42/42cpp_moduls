#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {

private:
    std::vector<int> storage;
    unsigned int _size;
    Span();

public:
    virtual ~Span();
    Span( unsigned int size );
    Span( const Span & src );
    Span & operator= ( const Span & src );

    void addNumber( int number );
    void addNumber( const std::vector<int> & src , int size );
    int shortestSpan( void );
    int longestSpan( void );
};

#endif