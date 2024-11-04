/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:39:46 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 09:49:26 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "=== Basic Tests ===" << std::endl;
	{
		Cat original;
		original.getBrain()->addIdea("I love fish!");
		original.getBrain()->addIdea("I hate dogs!");
		original.getBrain()->addIdea("I love sleeping!");

		std::cout << "\nOriginal cat before copy:" << std::endl;
		original.getBrain()->printBrain();

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
