/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:24:58 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 15:05:57 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& src);
		AMateria	&operator=(const AMateria& src);
		~AMateria();
		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
