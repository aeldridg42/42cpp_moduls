#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form {

private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExec;
    Form();

public:
    Form( std::string _name, int _g1, int _g2 );
    virtual ~Form();
    Form( const Form & src );
    Form & operator= ( const Form & src );

    std::string getName( void ) const;
    bool getIsSigned( void ) const;
    int getGradeToSign( void ) const;
    int getGradeToExec( void ) const;
    void setIsSigned( bool status );

    void beSigned( const Bureaucrat & src );

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class FormIsNotSigned : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual std::string getTarget( void ) const = 0;
};

std::ostream& operator << (std::ostream &out, const Form &point);

#endif