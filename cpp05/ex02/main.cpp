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
            try {
                a.signForm(c);
                c.beSigned(a);
                a.executeForm(c);
                c.execute(a);
            }
            catch (const std::exception & e) {
                std::cout << e.what() << std::endl;
            }
            
        }
        catch (const std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
}