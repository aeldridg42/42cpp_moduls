#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(150), gradeToExec(150) {

}

Form::Form( std::string _name, int _g1, int _g2 ) : name(_name), isSigned(false), gradeToSign(_g1), gradeToExec(_g2) {
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToExec > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

Form::~Form() {

}

Form::Form( const Form & src ) : name(src.name), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec) {
    *this = src;
}

Form & Form::operator= ( const Form & src ) {
    if (this != &src) {
        this->isSigned = src.isSigned;
    }
    return *this;
}

std::string Form::getName( void ) const {
    return this->name;
}

bool Form::getIsSigned( void ) const {
    return this->isSigned;
}

int Form::getGradeToSign( void ) const {
    return this->gradeToSign;
}

int Form::getGradeToExec( void ) const {
    return this->gradeToExec;
}

void Form::beSigned( const Bureaucrat & src ) {
    if (src.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator << (std::ostream &out, const Form &point) {
    out << "Form name is: " << point.getName() << std::endl
    << "is it signed?: " << point.getIsSigned() << std::endl
    << "grade to sign is: " << point.getGradeToSign() << std::endl
    << "grade to execute is: " << point.getGradeToExec() << std::endl;
    return out; 
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is to high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is to low";
}

const char* Form::FormIsNotSigned::what() const throw() {
    return "Form is not signed yet!";
}

void Form::setIsSigned( bool status ) {
    this->isSigned = status;
}
