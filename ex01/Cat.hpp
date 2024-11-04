/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:39:42 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 09:44:10 by jeberle          ###   ########.fr       */
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
