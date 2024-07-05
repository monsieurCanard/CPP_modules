/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:30:47 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 14:03:59 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name)
{
	
}

HumanA::~HumanA()
{
}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}