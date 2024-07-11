/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:28:19 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 10:39:35 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("none_clap_name"), ScavTrap("none"), FragTrap("none"){
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	name = "none";
	hit_points = 0;
	energy_points = 0;
	attack_damage = 0;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "Constructor of DiamondTrap called" << std::endl;
	this->name = name;
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(ClapTrap::getName() + "_clap_name"), ScavTrap(src.name), FragTrap(src.name) {
	*this = src;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "Destructor of DiamondTrap called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &src) {
	if (this != &src) {
		name = src.name;
		hit_points = src.hit_points;
		energy_points = src.energy_points; 
		attack_damage = src.attack_damage;
	}
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}