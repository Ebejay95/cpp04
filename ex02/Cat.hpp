/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:07:20 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 10:08:30 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "./Brain.hpp"
#include "./Animal.hpp"

class Cat : public Animal {
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(const Cat& src);
		Cat	&operator=(const Cat& src);
		~Cat();

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif
