/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:20:38 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 13:29:58 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	
	Zombie*	albert = newZombie("Albert");
	Zombie  bernard;
	
	bernard.randomChump("Bernard");
	albert->announce();

	delete albert;
	
}
