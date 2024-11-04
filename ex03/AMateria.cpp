/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:24:47 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 14:03:23 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"

AMateria::AMateria() _type("antimatter") {}

AMateria::AMateria(std::string const &type) _type(type) {}

AMateria::AMateria(const AMateria& src) {
	*this = src;
}

AMateria& AMateria::operator=(const AMateria& src) {
	if (this != &src)
		_type = src._type;
	return (*this);
}

AMateria::~AMateria() {}
		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
