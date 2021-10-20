#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

protected:
	std::string _name;
	int _health;
	int _energy;
	int _damage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap & src );
	ClapTrap( std::string name, int health, int energy, int damage);
	ClapTrap & operator= ( const ClapTrap & src );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName( std::string name );
	void setHealth( int health );
	void setEnergy( int energy );
	void setDamage( int damage );
	std::string getName( void ) const;
	int getHealth( void ) const;
	int getEnergy( void ) const;
	int getDamage( void ) const; 

};

#endif