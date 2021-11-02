#include "MutantStack.hpp"

template <typename T>
MutantStack<T> & MutantStack<T>::operator= ( const MutantStack<T> & src ) {
    if (*this != src) {
        this->c = src.c;
    }
    return *this;
}
