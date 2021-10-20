#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	int size = 10;
	{
		Animal* arr[size];
		for (int i = 0; i < size / 2; i++)
			arr[i] = new Dog();
		for (int i = size / 2; i < size; i++)
			arr[i] = new Cat();
		for (int i = 0; i < size; i++)
			arr[i]->makeSound();
		for (int i = 0; i < size; i++)
			delete arr[i];
	}
	std::cout << std::endl << std::endl;
	{
		Dog basic;
		basic.addIdea("asd", 0);
		{
			Dog tmp(basic);
			std::cout << tmp.getIdea(0) << std::endl;
		}
		std::cout << basic.getIdea(0) << std::endl;
		
	}
	// while (1);
}
