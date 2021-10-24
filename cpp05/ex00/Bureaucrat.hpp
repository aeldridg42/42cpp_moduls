#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

private:
    const std::string name;
    int grade;
    Bureaucrat( void );

public:
    Bureaucrat( std::string _name, int _grade );
    virtual ~Bureaucrat( void );
    Bureaucrat( const Bureaucrat & src );
    Bureaucrat & operator= ( const Bureaucrat & src );

    std::string getName( void ) const ;
    int getGrade( void ) const ;
    void increment( void );
    void decrement( void );

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

};

std::ostream& operator << (std::ostream &out, const Bureaucrat &point);

#endif