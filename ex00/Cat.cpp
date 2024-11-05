/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:16:18 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/05 11:37:13 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}


Cat::Cat(const Cat& src) : Animal(src) {
	_type = "Cat";
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		Animal::operator=(src);
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called - may got to be eaten in springfield" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐱 Meow! 🐱"<< std::endl;
}
