/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:17:38 by anthony           #+#    #+#             */
/*   Updated: 2024/07/09 17:29:03 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name) {
	this->name = name;
}

Zombie* Zombie::zombieHorde(int n, std::string name) {
	
	Zombie* horde = new Zombie[n];
	while (--n >= 0)
	{
		horde[n].setName(name);
	}
	return horde;
}