/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:31:50 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 10:19:51 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _weapon(NULL), _name(name) {
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::HumanB(std::string name, Weapon& weapon)
: _weapon(&weapon), _name(name) {
	std::cout << "HumanB Constructor with Weapon called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB Destructor called" << std::endl;
}

void	HumanB::attack() {
	std::cout	<< _name
				<< " attacks with their " << _weapon->getType()
				<< std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}