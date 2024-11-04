/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:39:39 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 09:43:55 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	_brain = new Brain(*src._brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
	{
		Animal::operator=(src);
		delete _brain;
		_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called - may got to be eaten in springfield" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐱 Meow! 🐱"<< std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}
