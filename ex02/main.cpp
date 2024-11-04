/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:57:25 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 10:19:51 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	//Animal a;
	//const Animal* meta = new Animal();
	std::cout << "=== Basic Tests ===" << std::endl;
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		dog->makeSound();
		delete dog;
		delete cat;
	}
	std::cout << "\n=== Copy Constructor Tests ===" << std::endl;
	{
		Cat original;
		Cat copy(original);
		original.makeSound();
		copy.makeSound();
		Dog dogOriginal;
		Dog dogCopy = dogOriginal;
		dogOriginal.makeSound();
		dogCopy.makeSound();
	}
	std::cout << "\n=== Brain Tests ===" << std::endl;
	{
		std::cout << "Creating cat with ideas..." << std::endl;
		Cat original;
		original.getBrain()->addIdea("I love fish!");
		original.getBrain()->addIdea("I hate dogs!");
		original.getBrain()->addIdea("I love sleeping!");
		std::cout << "\nOriginal cat's brain:" << std::endl;
		original.getBrain()->printBrain();
		std::cout << "\nTesting deep copy..." << std::endl;
		Cat copy(original);
		original.getBrain()->addIdea("New thought!");
		std::cout << "\nOriginal cat after modification:" << std::endl;
		original.getBrain()->printBrain();
		std::cout << "\nCopy cat (should not have the new thought):" << std::endl;
		copy.getBrain()->printBrain();
	}
	std::cout << "\n=== Empty Brain Tests ===" << std::endl;
	{
		Cat emptyCat;
		std::cout << "\nEmpty cat's brain:" << std::endl;
		emptyCat.getBrain()->printBrain();
		emptyCat.getBrain()->addIdea("First thought!");
		std::cout << "\nCat's brain after one thought:" << std::endl;
		emptyCat.getBrain()->printBrain();
		Cat emptyBrainCopy(emptyCat);
		std::cout << "\nCopied cat's brain:" << std::endl;
		emptyBrainCopy.getBrain()->printBrain();
		Cat anotherCat;
		anotherCat.getBrain()->addIdea("Original thought");
		anotherCat = emptyCat;
		std::cout << "\nAssigned cat's brain (should be same as empty):" << std::endl;
		anotherCat.getBrain()->printBrain();
	}
	std::cout << "\n=== Array Tests ===" << std::endl;
	{
		const int count = 4;
		Animal* animals[count];
		for(int i = 0; i < count; i++) {
			if(i < count/2) {
				animals[i] = new Dog();
				((Dog*)animals[i])->getBrain()->addIdea("I love bones!");
			} else {
				animals[i] = new Cat();
				((Cat*)animals[i])->getBrain()->addIdea("I love fish!");
			}
		}
		for(int i = 0; i < count; i++) {
			animals[i]->makeSound();
			if (Dog* dog = dynamic_cast<Dog*>(animals[i]))
				dog->getBrain()->printBrain();
			else if (Cat* cat = dynamic_cast<Cat*>(animals[i]))
				cat->getBrain()->printBrain();
		}
		for(int i = 0; i < count; i++)
			delete animals[i];
	}
	return 0;
}
