/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:37:54 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/30 12:12:51 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal() : _type("unset") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
		_type = src._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called for " << _type << std::endl;
}

void	Animal::makeSound()
{
	std::cout << "somethings rustles in the undergrowth - might be an Animal"<< std::endl;
}
