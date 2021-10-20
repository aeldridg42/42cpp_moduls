#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

protected:
	std::string type;

public:
	Animal();
	Animal(const Animal & src);
	Animal( std::string tp );
	virtual ~Animal();
	Animal & operator= ( const Animal & src );
	virtual void makeSound();
};

#endif