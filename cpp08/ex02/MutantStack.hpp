#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {

public:
    MutantStack() : std::stack<T>() {}
    virtual ~MutantStack() {}
    MutantStack( const MutantStack<T> & src ) : std::stack<T>(src) {}
    MutantStack<T> & operator= ( const MutantStack<T> & src );

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};

#endif