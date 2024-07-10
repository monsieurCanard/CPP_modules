/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/10 11:17:46 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ScavTrap	michel("michel");
	FragTrap	evelyne("evelyne");

	francis.attack("michel");
	michel.takeDamage(1);

	francis.attack("michel");
	michel.takeDamage(1);

	francis.beRepaired(1);

	michel.guardGate();

	evelyne.highFivesGuys();

	michel.attack("francis");
	francis.takeDamage(1);

	evelyne.attack("francis");
	francis.takeDamage(30);

	michel.displayInfo();
	francis.displayInfo();
	evelyne.displayInfo();
}