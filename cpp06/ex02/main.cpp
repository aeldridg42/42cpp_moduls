#include "Base.hpp"

Base * generate(void) {
    srand(time(0));
    int i = rand() % 3;
    std::cout << "Created new " << static_cast<char>(65 + i) << std::endl;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "it's A(reference)" << std::endl;
    }
    catch (std::exception & e) {

    }
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "it's B(reference)" << std::endl;
    }
    catch (std::exception & e) {

    }
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "it's C(reference)" << std::endl;
    }
    catch (std::exception & e) {

    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "it's A(pointer)" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "it's B(pointer)" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "it's C(pointer)" << std::endl;
}

int main() {
    Base *b = generate();

    identify(b);
    identify(*b);

    delete b;
}