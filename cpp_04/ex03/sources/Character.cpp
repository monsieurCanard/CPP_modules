/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:36:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 12:41:09 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_name = "none";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

Character::Character(std::string name) {
	std::cout << "Character constructor parameter called" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy) {
	_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character &src) {

	if (this != &src) {
		_name = src._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}	
	return (*this);
}

std::string const & Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i] && m) {
			_inventory[i] = m;
			std::cout << "Materia equipped in inventory number: " << i << std::endl;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	std::cout << "Materia unequipped in inventory number: " << idx << std::endl;
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

AMateria* Character::getMateria(int idx) const {
	if (idx < 0 || idx > 3)
		return (NULL);
	return (_inventory[idx]);
}