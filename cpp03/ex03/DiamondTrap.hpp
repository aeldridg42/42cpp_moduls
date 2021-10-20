#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
    std::string _name;

public:
    DiamondTrap();
	DiamondTrap( std::string name );
	~DiamondTrap();
	DiamondTrap( const DiamondTrap & src );
	DiamondTrap & operator= ( const DiamondTrap & src );

	void attack( std::string const & target );
	void whoAmI();

};

#endif