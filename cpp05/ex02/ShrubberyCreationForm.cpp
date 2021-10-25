#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("default") {

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string _target ) : Form("ShrubberyCreationForm", 145, 137), target(_target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form("ShrubberyCreationForm", 145, 137) {
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= ( const ShrubberyCreationForm & src ) {
    if (this != &src) {
        this->setIsSigned(src.getIsSigned());
        this->target = src.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned()) {
        throw FormIsNotSigned();
    }
    if (executor.getGrade() <= this->getGradeToExec()) {
        try {
            std::ofstream ofs;
            ofs.open(this->target + "_shrubbery");
            ofs << "       _-_" << std::endl;
            ofs << "    /~~   ~~\\" << std::endl;
            ofs << " /~~         ~~\\" << std::endl;
            ofs << "{               }" << std::endl;
            ofs << " \\  _-     -_  /" << std::endl;
            ofs << "   ~  \\\\ //  ~" << std::endl;
            ofs << "_- -   | | _- _" << std::endl;
            ofs << "  _ -  | |   -_" << std::endl;
            ofs << "      // \\\\" << std::endl;
        }
        catch (const std::exception & e) {
            std::cout << "File open error" << std::endl;
        }
    }
    else
        throw GradeTooLowException();
}

std::string ShrubberyCreationForm::getTarget( void ) const {
    return this->target;
}