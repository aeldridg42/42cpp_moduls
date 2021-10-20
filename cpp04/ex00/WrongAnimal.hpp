#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & src);
	WrongAnimal( std::string tp );
	virtual ~WrongAnimal();
	WrongAnimal & operator= ( const WrongAnimal & src );
	void makeSound();

};

#endif