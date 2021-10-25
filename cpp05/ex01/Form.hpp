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

    void beSigned( const Bureaucrat & src );

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    
};

std::ostream& operator << (std::ostream &out, const Form &point);

#endif