/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:28:19 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/25 18:17:13 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("none_clap_name"), ScavTrap("none"), FragTrap("none"){
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	_name = "none";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "Constructor of DiamondTrap called" << std::endl;
	this->_name = name;
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.ClapTrap::_name), ScavTrap(src._name), FragTrap(src._name) {
	*this = src;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "Destructor of DiamondTrap called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &src) {
	if (this != &src) {
		_name = src._name;
		_hit_points = src._hit_points;
		_energy_points = src._energy_points; 
		_attack_damage = src._attack_damage;
	}
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}