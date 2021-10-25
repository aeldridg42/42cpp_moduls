#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "default tests:" << std::endl << std::endl;
    {
        try {
            Bureaucrat a("a1", 50);
            std::cout << a << std::endl << std::endl;
            Form b("formB", 70, 40);
            std::cout << b << std::endl;
            try {
                a.signForm(b);
                b.beSigned(a);
            }
            catch (const std::exception & e) {
                std::cout << e.what() << std::endl;
            }
            std::cout << std::endl;
            std::cout << b << std::endl;
        }
        catch (const std::exception & e ) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl << "error tests:" << std::endl << std::endl;
    {
        try {
            Form b("formB", 0, 100);
            Bureaucrat a("a2", 100);
            std::cout << a << std::endl;
        }
        catch (const std::exception & e) {
            std::cout << e.what() << std::endl << std::endl;
        }
        std::cout << "______________________________" << std::endl << std::endl;
        try {
            Bureaucrat a("a1", 100);
            std::cout << a << std::endl << std::endl;
            Form b("formB", 70, 40);
            std::cout << b << std::endl;
            try {
                a.signForm(b);
                std::cout << "sadasdasda" << std::endl;
                b.beSigned(a);
            }
            catch (const std::exception & e) {
                std::cout << e.what() << std::endl;
            }
            std::cout << std::endl;
            std::cout << b << std::endl;
        }
        catch (const std::exception & e ) {
            std::cout << e.what() << std::endl;
        }

    }
}