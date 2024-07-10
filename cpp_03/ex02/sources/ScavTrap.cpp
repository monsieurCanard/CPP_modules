/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:59:20 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/10 16:05:48 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor of ScavTrap called" << std::endl;
	name = "none";
	hit_points = 0;
	energy_points = 0;
	attack_damage = 0;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "Constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	if (this != &src)
	{
		hit_points = src.hit_points;
		energy_points = src.energy_points;
		attack_damage = src.attack_damage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (energy_points == 0)
		std::cout << "ScavTrap " << name << " doesn't have enought energy points" << std::endl;
	else if (hit_points == 0)
		std::cout << "ScavTrap " << name << " cannot attack because he's dead !" << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target;
		energy_points--;
	}
}

void	ScavTrap::guardGate() {
std::cout << "ScavTrap " << name << " is now in gate keeper mode !" << std::endl;
}