/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:16:47 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 10:48:52 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie* squad1 = Zombie::zombieHorde(10, "Albert");
	for (int i = 0; i < 10; i++) {
		squad1[i].announce();
	}
	Zombie* squad2 = Zombie::zombieHorde(10, "Francis");
	for (int i = 0; i < 10; i++) {
		squad2[i].announce();
	}
	delete[] squad1;
	delete[] squad2;
}