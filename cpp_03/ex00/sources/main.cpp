/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:07:16 by anthony           #+#    #+#             */
/*   Updated: 2024/07/09 18:24:36 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	francis("francis");
	ClapTrap	michel("michel");

	michel.attack("francis");
	francis.takeDamage(1);

	francis.attack("michel");
	michel.takeDamage(1);

	francis.beRepaired(1);

	francis.attack("michel");
	michel.takeDamage(1);

	michel.displayInfo();
	francis.displayInfo();
}