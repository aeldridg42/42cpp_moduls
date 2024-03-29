#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	virtual ~Ice();
	Ice( const Ice & src );
	Ice & operator= ( const Ice & src );
	virtual void use(ICharacter& target);

	virtual AMateria* clone() const;
};

#endif