#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("default") {

}

RobotomyRequestForm::RobotomyRequestForm( std::string _target ) : Form("RobotomyRequestForm", 72, 45), target(_target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form("RobotomyRequestForm", 72, 45) {
    *this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator= ( const RobotomyRequestForm & src ) {
    if (this != &src) {
        this->setIsSigned(src.getIsSigned());
        this->target = src.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned()) {
        throw FormIsNotSigned();
    }
    if (executor.getGrade() <= this->getGradeToExec()) {
        srand(time(0));
        std::cout << "*Drilling noises*" << std::endl;
        if (rand() % 2)
            std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
    }
    else
        throw GradeTooLowException();
}


std::string RobotomyRequestForm::getTarget( void ) const {
    return this->target;
}