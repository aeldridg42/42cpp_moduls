#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
	Brain* brain;
public:
	Dog();
	~Dog();
	Dog( const Dog & src );
	Dog & operator= ( const Dog & src );
	virtual void makeSound();

	void addIdea( std::string idea, int num );
	std::string getIdea( int num );
};

#endif