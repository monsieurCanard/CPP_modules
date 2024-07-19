/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:30:47 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 18:25:33 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
: _weapon(weapon), _name(name) {
	std::cout << "HumanA Constructor with weapon " << weapon.getType() << " called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << RED << "HumanA Destructor called" << RESET << std::endl;
}

void	HumanA::attack() {
	std::cout	<< TEAL << _name 
				<< " attacks with their " << _weapon.getType() 
				<< RESET << std::endl;
}