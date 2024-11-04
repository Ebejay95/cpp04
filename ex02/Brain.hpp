/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:07:16 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 10:08:14 by jeberle          ###   ########.fr       */
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
		bool	hasIdeas(void);
	public:
		Brain();
		Brain(const Brain& src);
		Brain	&operator=(const Brain& src);
		~Brain();
	void	addIdea(const std::string& idea);
	void	printBrain(void);
};

#endif
