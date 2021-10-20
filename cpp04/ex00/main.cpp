#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	Animal *a = new Animal();
	Animal *b = new Cat();
	Animal *c = new Dog();
	std::cout << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();
	std::cout << std::endl << std::endl;;
	WrongAnimal d = WrongCat();
	WrongCat e = WrongCat();
	std::cout << std::endl;
	d.makeSound();
	e.makeSound();
	std::cout << std::endl << std::endl;
	delete a;
	delete b;
	delete c;
}