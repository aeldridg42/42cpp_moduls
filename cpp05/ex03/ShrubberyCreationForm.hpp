#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form {

private:
    std::string target;
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm( std::string _target );
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm( const ShrubberyCreationForm & src );
    ShrubberyCreationForm & operator= ( const ShrubberyCreationForm & src );

    virtual void execute(Bureaucrat const & executor) const;
    virtual std::string getTarget( void ) const;
};

#endif