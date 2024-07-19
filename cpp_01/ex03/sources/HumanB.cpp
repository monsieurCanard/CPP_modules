/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:31:50 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 18:25:17 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _weapon(NULL), _name(name) {
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::HumanB(std::string name, Weapon& weapon)
: _weapon(&weapon), _name(name) {
	std::cout << "HumanB Constructor with Weapon" << weapon.getType() << " called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << RED << "HumanB Destructor called" << RESET << std::endl;
}

void	HumanB::attack() {
	std::cout	<< TEAL << _name
				<< " attacks with their " << _weapon->getType()
				<< RESET << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}