/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/10 15:57:53 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ScavTrap	michel("michel");
	ClapTrap	unknown;

	std::cout << std::endl;
	unknown.setName("philippe");
	unknown.setHitPoints(10);
	unknown.setEnergyPoints(10);
	unknown.setAttackDamage(1000);

	std::cout << std::endl;
	michel.attack(francis.getName());
	francis.takeDamage(michel.getAttackDamage());

	std::cout << std::endl;
	francis.attack(michel.getName());
	michel.takeDamage(francis.getAttackDamage());

	std::cout << std::endl;
	francis.beRepaired(1);
	
	std::cout << std::endl;
	michel.guardGate();

	std::cout << std::endl;
	francis.attack(michel.getName());
	michel.takeDamage(francis.getAttackDamage());

	std::cout << std::endl;
	unknown.attack(michel.getName());
	michel.takeDamage(unknown.getAttackDamage());

	std::cout << std::endl;
	unknown.displayInfo();
	michel.displayInfo();
	francis.displayInfo();
	std::cout << std::endl;
}