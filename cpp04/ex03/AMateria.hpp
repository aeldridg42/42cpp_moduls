#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{

protected:
	std::string _type;
	AMateria();

public:
	virtual ~AMateria();
	AMateria( const AMateria & src );
	AMateria( std::string const & type );
	AMateria & operator= ( const AMateria & src );

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif