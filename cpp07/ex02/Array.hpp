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
    Array() : _size(0) , elements(NULL) { }
    Array( unsigned int n ) : elements(NULL), _size(n) { 
        if (n)
            elements = new T[n];
    }
    virtual ~Array() {
        if (_size)
            delete[] this->elements;
    }
    T & operator[] ( const unsigned int index ) {
        if (index >= _size)
            throw std::exception();
        return elements[index];
    }
    Array( const Array & src ) : elements(NULL), _size(0) { *this = src; }
    Array & operator= ( const Array & src ) {
        if (this != &src) {
            if (this->_size)
                delete[] this->elements;
            this->elements = NULL;
            this->_size = 0;
            if (src.size()) {
                this->_size = src.size();
                this->elements = new T[this->_size];
                for (int i = 0; i < (int)this->_size ; i++)
                    this->elements[i] = src.get(i);
            }
        }
        return *this;
    }
    int size() const { return this->_size; }
    T & get(int i) const { return elements[i]; }
};

#endif