/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:44:53 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/30 15:56:11 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

# ifndef MAX_IDEAS
#  define MAX_IDEAS 100
# endif

class Brain {
	private:
		std::string	_ideas[MAX_IDEAS];
	public:
		Brain();
		Brain(const Brain& src);
		Brain	&operator=(const Brain& src);
		~Brain();
};

#endif
