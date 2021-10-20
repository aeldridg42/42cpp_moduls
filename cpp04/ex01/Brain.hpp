#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

private:
    std::string ideas[100];

public:
    Brain();
    ~Brain();
    Brain( const Brain & src );
    Brain & operator= ( const Brain & src );

    void addIdea( std::string idea, int num );
    std::string getIdea( int num );
};

#endif