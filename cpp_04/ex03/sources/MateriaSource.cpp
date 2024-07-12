/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:36:58 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 09:25:21 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}


MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = copy._inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = src._inventory[i];
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = materia;
			std::cout << "Materia learned and put in inventory number: " << i << std::endl;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	int 	index_last_materia = 0;

	std::cout << "Creating materia of type: " << type << std::endl;
	for (int i = 0; i < 4 ; i++) {
		if (_inventory[i] && _inventory[i]->getType() == type)
			index_last_materia = i;
		if (_inventory[i])
			std::cout << "Materia " << _inventory[i]->getType() << " check at : " << i << std::endl;
	}
	if (index_last_materia != 0
		|| (_inventory[index_last_materia]
		&& _inventory[index_last_materia]->getType() == type)) {
		std::cout << "Materia found at index : " << index_last_materia << std::endl;
		return (_inventory[index_last_materia]->clone());
	}
	std::cout << "Materia not found" << std::endl;
	return (0);
}