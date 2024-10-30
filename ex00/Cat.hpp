/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:16:21 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/30 15:33:10 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& src);
		Cat	&operator=(const Cat& src);
		~Cat();

		void	makeSound(void) const;
};

#endif
