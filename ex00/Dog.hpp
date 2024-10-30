/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:16:25 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/30 15:34:28 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& src);
		Dog	&operator=(const Dog& src);
		~Dog();

		void	makeSound(void) const;
};

#endif
