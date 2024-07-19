/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:20:38 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 18:15:11 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	
	Zombie*	albert;
	
	albert = newZombie("Albert");
	albert->announce();
	delete albert;

	randomChump("Bernard");	
}
