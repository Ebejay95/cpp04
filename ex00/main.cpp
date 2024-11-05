/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:23:13 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/05 11:41:49 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "=== Regular Animal Tests ===" << std::endl;
	{
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

	std::cout << "\n=== Wrong Animal Tests ===" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		meta->makeSound();

		delete meta;
		delete cat;
	}
	std::cout << "\n=== Direct WrongCat Test 1 ===" << std::endl;
	{
		WrongAnimal* pet = new WrongCat();
		pet->makeSound();
		WrongCat cat;
		cat.makeSound();
		delete pet;
	}
	std::cout << "\n=== Direct WrongCat Test 2 ===" << std::endl;
	{
		WrongCat wrongCat;
		wrongCat.makeSound();
		WrongCat copyWrongCat(wrongCat);
		copyWrongCat.makeSound();
	}

	return (0);
}
