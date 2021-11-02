#include "Span.hpp"

int main()
{
    try {
        Span sp(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(100);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Span sp(7);
        sp.addNumber(100);
        // sp.addNumber(2);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Span sp(6);
        std::vector<int> tmp;
        tmp.push_back(-5);
        tmp.push_back(-3);
        tmp.push_back(17);
        tmp.push_back(9);
        tmp.push_back(10);
        sp.addNumber(tmp, 5);
        // sp.addNumber(100);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}