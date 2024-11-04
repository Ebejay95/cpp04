/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:56:09 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 23:42:01 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _templates[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& src);
        MateriaSource& operator=(const MateriaSource& src);
        ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};


#endif
