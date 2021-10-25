#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    std::cout << "default tests:" << std::endl << std::endl;
    {
        try {
            Bureaucrat a("a1", 2);
            RobotomyRequestForm b("target123");
            ShrubberyCreationForm c("asd");
            PresidentialPardonForm d("Khovanskiy");
            try {
                a.signForm(c);
                a.signForm(b);
                a.signForm(d);
                b.beSigned(a);
                c.beSigned(a);
                d.beSigned(a);
                a.executeForm(c);
                a.executeForm(b);
                a.executeForm(d);
                c.execute(a);
                b.execute(a);
                d.execute(a);
            }
            catch (const std::exception & e) {
                std::cout << e.what() << std::endl;
            }
            
        }
        catch (const std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl << "error tests:" << std::endl << std::endl;
    {
        try {
            Bureaucrat a("check", 150);
            PresidentialPardonForm b("target123");
            try {
                a.signForm(b);
                b.beSigned(a);
                a.executeForm(b);
                std::cout << "sadasdasda" << std::endl;
            }
            catch (const std::exception & e) {
                std::cout << e.what() << std::endl;
            }
        }
        catch (const std::exception & e ) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl << "____________________________________" << std::endl;
        try {
            Bureaucrat a("check", 1);
            PresidentialPardonForm b("target123");
            try {
                a.executeForm(b);
                std::cout << "sadasdasda" << std::endl;
            }
            catch (const std::exception & e) {
                std::cout << e.what() << std::endl;
            }
        }
        catch (const std::exception & e ) {
            std::cout << e.what() << std::endl;
        }
    }
}