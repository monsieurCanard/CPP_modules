/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/10 17:19:28 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ScavTrap	michel("michel");
	FragTrap	unknown;
	DiamondTrap	diamond("diamond");

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

	diamond.whoAmI();
	std::cout << std::endl;
	diamond.attack(michel.getName());	
	std::cout << std::endl;
	michel.takeDamage(diamond.getAttackDamage());
	std::cout << std::endl;
	diamond.highFivesGuys();
	
	std::cout << std::endl;
	francis.attack(michel.getName());
	michel.takeDamage(francis.getAttackDamage());

	std::cout << std::endl;
	unknown.attack(michel.getName());
	michel.takeDamage(unknown.getAttackDamage());

	std::cout << std::endl;
	diamond.displayInfo();
	unknown.displayInfo();
	michel.displayInfo();
	francis.displayInfo();
	std::cout << std::endl;
}