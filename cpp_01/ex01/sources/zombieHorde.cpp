/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:17:38 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 10:31:36 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name) {
	this->name = name;
}

Zombie* Zombie::zombieHorde(int N, std::string name) {
	
	Zombie* horde = new Zombie[N];
	while (--N >= 0)
	{
		horde[N].setName(name);
	}
	return horde;
}