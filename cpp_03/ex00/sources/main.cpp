/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/11 10:41:48 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ClapTrap	michel("michel");
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
	francis.attack(michel.getName());
	michel.takeDamage(francis.getAttackDamage());

	std::cout << std::endl;
	unknown.attack(francis.getName());
	francis.takeDamage(unknown.getAttackDamage());

	std::cout << std::endl;
	francis.attack(unknown.getName());
	unknown.takeDamage(francis.getAttackDamage());
	
	unknown.displayInfo();
	michel.displayInfo();
	francis.displayInfo();
	std::cout << std::endl;
}