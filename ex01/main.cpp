/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:39:46 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/30 17:36:07 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	Brain brain;
	Animal animal;
	animal.makeSound();
	Dog sue;
	sue.makeSound();
	Cat hen;
	hen.makeSound();

	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << meta->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

    const int count = 10;
    Animal* animals[count];

	for(int i = 0; i < count; i++) {
		if(i < count/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	Dog originalDog;
	Dog copyDog = originalDog;

	for(int i = 0; i < count; i++) {
		animals[i]->makeSound();
	}
	for(int i = 0; i < count; i++)
		delete animals[i];
	return (0);
}
