/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:07:15 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 10:08:02 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& src) {
	if (this != &src)
	{
		for (int i = 0; i < MAX_IDEAS; i++)
			_ideas[i] = src._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}


void	Brain::addIdea(const std::string& idea)
{
	for (int i = 0; (i < MAX_IDEAS); i++)
	{
		if (_ideas[i].empty())
		{
			_ideas[i] = idea;
			break;
		}
	}
}

bool	Brain::hasIdeas(void) {
	for (int i = 0; (i < MAX_IDEAS); i++)
	{
		if (!_ideas[i].empty())
			return (true);
	}
	return (false);
}

void	Brain::printBrain(void) {
	if (!this->hasIdeas())
	{
		std::cout << "\t🧠 brain seems to be empty\n" << std::endl;
		return ;
	}
	std::cout << "\tBrain contains:" << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		std::cout << "\t🧠  " << _ideas[i] << std::endl;
	}
}
