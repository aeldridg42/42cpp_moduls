#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
    FragTrap();
    FragTrap( std::string name );
    ~FragTrap();

    FragTrap( const FragTrap & src );
	FragTrap & operator= ( const FragTrap & src );
    
    void highFivesGuys( void );
    void attack( std::string const & target );
};

#endif