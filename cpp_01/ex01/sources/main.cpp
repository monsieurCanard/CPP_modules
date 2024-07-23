/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:16:47 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 15:33:12 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie* squad1 = zombieHorde(10, "Albert");
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		squad1[i].announce();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	Zombie* squad2 = zombieHorde(10, "Francis");
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		squad2[i].announce();
		std::cout << std::endl;
	}

	delete[] squad1;
	std::cout << std::endl;
	delete[] squad2;
}