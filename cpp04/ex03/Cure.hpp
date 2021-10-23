
#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <string>

class Cure : public AMateria {

public:
	Cure();
	virtual ~Cure() {}	
	Cure( const Cure & src );
	Cure & operator= (Cure const & src);

	virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif