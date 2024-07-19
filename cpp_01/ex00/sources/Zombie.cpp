/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:50:14 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 18:15:30 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::Zombie(const std::string name) : _name(name) {
	std::cout << "Zombie Constructor parameter called" << std::endl;
}

Zombie::~Zombie() {
	std::cout << RED << "Destructor kill " << _name << " RIP" << RESET << std::endl;
}

void	Zombie::announce(void) {

	std::cout << TEAL << _name << ": BraiiiiiiinnnzzzZ..." << RESET<< std::endl;
}
