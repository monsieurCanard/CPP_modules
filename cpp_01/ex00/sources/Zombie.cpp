/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:50:14 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 10:07:25 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << this->name << " le zombie est detruit. RIP" << std::endl;
}

void	Zombie::announce(void) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}