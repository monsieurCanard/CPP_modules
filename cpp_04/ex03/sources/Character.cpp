/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:36:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 17:27:11 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_name = "Default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

Character::Character(std::string name) {
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy) {
	_name = copy._name;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = copy._inventory[i].clone();
}

Character&	Character::operateur=(const Character &src) {
	if (this != &src) {
	
		_name = src._name;
		for (int i = 0; i < 4; i++)
			_inventory[i] = src._inventory[i].clone();
	}	
	return (*this);
}

Character::Character(std::string name) {
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

std::string const & Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
		}
		return ;
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}