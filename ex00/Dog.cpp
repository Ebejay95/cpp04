/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:16:22 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 08:40:13 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	_type = "Dog";
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
		Animal::operator=(src);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called - may got to be eaten in springfield" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "🐶 Woof! 🐶"<< std::endl;
}
