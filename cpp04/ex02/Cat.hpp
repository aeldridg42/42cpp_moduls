#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

private:
	Brain* brain;

public:
	Cat();
	virtual ~Cat();
	Cat( const Cat & src );
	Cat & operator= ( const Cat & src );
	virtual void makeSound();
	void getBrainAddress( void );
	void addIdea( std::string idea, int num );
	std::string getIdea( int num );
};

#endif