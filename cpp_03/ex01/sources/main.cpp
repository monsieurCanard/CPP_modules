/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/10 12:42:59 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ScavTrap	michel("michel");

	francis.attack("michel");
	michel.takeDamage(1);

	francis.beRepaired(1);

	francis.attack("michel");
	michel.takeDamage(1);

	michel.guardGate();

	michel.attack("francis");
	francis.takeDamage(20);

	michel.displayInfo();
	francis.displayInfo();
}