/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:46:45 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 08:47:58 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}


WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
	_type = "WrongCat";
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	if (this != &src)
		WrongAnimal::operator=(src);
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called - may got to be eaten in springfield" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "🐱 Meow! 🐱"<< std::endl;
}
