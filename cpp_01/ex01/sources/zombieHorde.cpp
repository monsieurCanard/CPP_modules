/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:17:38 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 09:41:58 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	
	Zombie* horde = new Zombie[n];
	while (--n >= 0)
	{
		horde[n].setName(name);
	}
	return horde;
}