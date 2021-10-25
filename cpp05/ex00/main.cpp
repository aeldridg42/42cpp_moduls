#include "Bureaucrat.hpp"

int main() {
    std::cout << "default test:" << std::endl;
    {
        try {
            Bureaucrat a("check", 150);
            std::cout << a << std::endl;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << std::endl << "error test:" << std::endl;
    {
        try {
            Bureaucrat a("check", 151);
            std::cout << a << std::endl << std::endl;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl << std::endl;
        }
    }
    std::cout << std::endl << "error test2:" << std::endl;
    {
        try {
            Bureaucrat a("check", 150);
            std::cout << a << std::endl << std::endl;
            a.decrement();
            std::cout << a << std::endl << std::endl;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl << std::endl;
        }
    }
    std::cout << std::endl << "error test3:" << std::endl;
    {
        try {
            Bureaucrat a("check", 1);
            std::cout << a << std::endl << std::endl;
            a.increment();
            std::cout << a << std::endl << std::endl;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl << std::endl;
        }
    }
    
}