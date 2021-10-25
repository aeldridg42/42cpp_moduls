#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
    std::string target;
    PresidentialPardonForm();

public:
    PresidentialPardonForm( std::string _target );
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm( const PresidentialPardonForm & src );
    PresidentialPardonForm & operator= ( const PresidentialPardonForm & src );

    virtual void execute(Bureaucrat const & executor) const;
    virtual std::string getTarget( void ) const;
};

#endif