#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter {

private:
	std::string     name;
    AMateria*       materias[4];

public:
	Character();
	Character( std::string _name );
	~Character();
	Character( const Character & src );
	Character & operator= ( const Character & src );

	virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif