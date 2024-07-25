/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/25 17:55:11 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ScavTrap	michel("michel");
	FragTrap	unknown;

	std::cout << std::endl;
	unknown.setName("evelyne");
	unknown.setHitPoints(100);
	unknown.setEnergyPoints(100);
	unknown.setAttackDamage(30);

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

	unknown.highFivesGuys();
	std::cout << std::endl;
	unknown.displayInfo();
	michel.displayInfo();
	francis.displayInfo();
	std::cout << std::endl;
}