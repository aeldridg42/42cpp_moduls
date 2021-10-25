#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("default"), grade(150) {

}

Bureaucrat::Bureaucrat( std::string _name, int _grade ) : name(_name) {
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHighException();
    this->grade = _grade;
}

Bureaucrat::~Bureaucrat( void ) {
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.name) {
    *this = src;
}

Bureaucrat & Bureaucrat::operator= ( const Bureaucrat & src ) {
    if (this != &src)
        this->grade = src.grade;
    return *this;
}

std::string Bureaucrat::getName( void ) const {
    return this->name;
}

int Bureaucrat::getGrade( void ) const {
    return this->grade;
}

void Bureaucrat::increment( void ) {
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement( void ) {
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is to high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is to low";
}

std::ostream& operator << (std::ostream &out, const Bureaucrat &point) {
    out << "name is: " << point.getName() << ", his grade is: " << point.getGrade();
    return out; 
}

void Bureaucrat::signForm( const Form & form ) {
    if (this->grade <= form.getGradeToSign())
        std::cout << this->name << " signs " << form.getName() << std::endl;
    else {
        std::cerr << this->name << " cannot sign " << form.getName() << " because ";
        throw GradeTooLowException();
    }
}

void Bureaucrat::executeForm( Form const & form ) {
    if (this->grade <= form.getGradeToSign())
        std::cout << this->name << " executes " << form.getName() << std::endl;
    else {
        std::cerr << this->name << " cannot execute " << form.getName() << " because ";
        throw GradeTooLowException();
    }
}
