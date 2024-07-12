/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:50:14 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 13:23:07 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(const std::string name) : name(name) {
}

Zombie::~Zombie() {
	std::cout << name << " le zombie est detruit. RIP" << std::endl;
}

void	Zombie::announce(void) {

	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
