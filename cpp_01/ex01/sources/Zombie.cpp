/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:17:13 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 18:17:02 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie() {
	std::cout << RED << _name << " le zombie est detruit. RIP" << RESET << std::endl;
}

void	Zombie::announce(void) {

	std::cout << TEAL << _name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::setName(std::string name) {
	_name = name;
}