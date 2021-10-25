#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class Intern {

public:
    Intern();
    virtual ~Intern();
    Intern( const Intern & src );
    Intern & operator= ( const Intern & src );

    Form* makeForm( std::string name, std::string target );
};


#endif