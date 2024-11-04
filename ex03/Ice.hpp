/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:57:41 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 23:41:45 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& src);
        Ice& operator=(const Ice& src);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
