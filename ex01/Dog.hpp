/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:39:44 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/30 17:25:36 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "./Brain.hpp"
#include "./Animal.hpp"

class Dog : public Animal {
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(const Dog& src);
		Dog	&operator=(const Dog& src);
		~Dog();

		void	makeSound(void) const;
};

#endif
