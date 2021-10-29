#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <typename T>
class Array {

private:
    T* elements;
    unsigned int _size;

public:
    Array() : _size(0) { elements = new T[0]; }
    Array( unsigned int n ) : _size(n) { elements = new T[n]; }
    virtual ~Array() { delete[] elements; }
    Array( const Array & src ) { elements = new T(src.size()); }
    Array & operator= ( const Array & src ) {
        if (this != &src) 
            return Array(src);
        return *this;
    }
    T & operator[] ( const unsigned int index ) {
        if (index >= _size)
            throw std::exception();
        return elements[index];
    }
    int size() const { return this->_size; }
};

#endif