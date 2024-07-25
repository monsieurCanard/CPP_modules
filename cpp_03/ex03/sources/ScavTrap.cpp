/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:59:20 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/25 17:54:18 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap") {
	std::cout << "Default constructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)  {
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "Constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	if (this != &src) {
		_hit_points = src._hit_points;
		_energy_points = src._energy_points;
		_attack_damage = src._attack_damage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energy_points == 0)
		std::cout << "ScavTrap " << _name << " doesn't have enought energy points" << std::endl;
	else if (_hit_points <= 0)
		std::cout << "ScavTrap " << _name << " cannot attack because he's dead !" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target;
		_energy_points--;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode !" << std::endl;
}