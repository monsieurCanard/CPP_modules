/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:30:47 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 10:09:08 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
: _weapon(weapon), _name(name) {
	std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA Destructor called" << std::endl;
}

void	HumanA::attack() {
	std::cout	<< _name 
				<< " attacks with their " << _weapon.getType() 
				<< std::endl;
}