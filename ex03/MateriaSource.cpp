/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:01:40 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 23:41:58 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        _templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
    for (int i = 0; i < 4; i++) {
        if (src._templates[i])
            _templates[i] = src._templates[i]->clone();
        else
            _templates[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
    if (this != &src) {
        for (int i = 0; i < 4; i++) {
            delete _templates[i];
            if (src._templates[i])
                _templates[i] = src._templates[i]->clone();
            else
                _templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete _templates[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return;
    for (int i = 0; i < 4; i++) {
        if (!_templates[i]) {
            _templates[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_templates[i] && _templates[i]->getType() == type)
            return _templates[i]->clone();
    }
    return NULL;
}