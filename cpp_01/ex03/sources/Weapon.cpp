/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:26:42 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 10:11:38 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon Destructor called" << std::endl;
}

const std::string Weapon::getType() {
	return _type;
}

void	Weapon::setType(std::string name) {
	_type = name;
}