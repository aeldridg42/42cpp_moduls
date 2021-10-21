#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal test;
	int size = 10;
	{
		Animal* arr[size];
		for (int i = 0; i < size / 2; i++)
			arr[i] = new Dog();
		for (int i = size / 2; i < size; i++)
			arr[i] = new Cat();
        std::cout << std::endl;
		for (int i = 0; i < size; i++)
			arr[i]->makeSound();
        std::cout << std::endl;
		for (int i = 0; i < size; i++)
			delete arr[i];
	}
	std::cout << std::endl << std::endl;
	{
		Dog basic;
		{
			Dog tmp = basic;
            std::cout << std::endl;
			tmp.getBrainAddress();
            std::cout << std::endl;
		}
        std::cout << std::endl;
		basic.getBrainAddress();
        std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
    {
        Dog check;
        check.addIdea("idea 1", 5);
        {
            Dog check2(check);
            std::cout << check2.getIdea(5) << std::endl;
            check2.addIdea("another idea", 5);
            std::cout << check2.getIdea(5) << std::endl;
        }
        std::cout << std::endl << check.getIdea(5) << std::endl;
    }
	// while (1);
}
