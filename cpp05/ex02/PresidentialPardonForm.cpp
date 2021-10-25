#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("default") {

}

PresidentialPardonForm::PresidentialPardonForm( std::string _target ) : Form("PresidentialPardonForm", 25, 5), target(_target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form("PresidentialPardonForm", 25, 5) {
    *this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator= ( const PresidentialPardonForm & src ) {
    if (this != &src) {
        this->setIsSigned(src.getIsSigned());
        this->target = src.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned()) {
        throw FormIsNotSigned();
    }
    if (executor.getGrade() <= this->getGradeToExec())
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw GradeTooLowException();
}

std::string PresidentialPardonForm::getTarget( void ) const {
    return this->target;
}