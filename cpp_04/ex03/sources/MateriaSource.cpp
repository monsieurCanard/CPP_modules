/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:36:58 by anthony           #+#    #+#             */
/*   Updated: 2024/07/11 17:50:03 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++)
			_inventory[i] = src._inventory[i].clone();
	}
	return (*this);
}

