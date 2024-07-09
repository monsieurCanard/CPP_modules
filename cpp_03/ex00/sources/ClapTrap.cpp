/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:37:13 by anthony           #+#    #+#             */
/*   Updated: 2024/07/09 18:29:11 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10),
	energy_points(10), attack_damage(0) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	if (this != &src) {
		hit_points = src.hit_points;
		energy_points = src.energy_points;
		attack_damage = src.attack_damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (energy_points == 0) std::cout << "ClapTrap doesn't enought energy points" << std::endl;
	else {
		std::cout << "ClapTrap " << name << " attacks " << target;
		energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	std::cout << ", causing " << amount << " points of damage !";
	if (hit_points < (int)amount) std::cout << ", causing the death of " << name;
	std::cout << std::endl;
	hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout	<< "ClapTrap " << name
				<< " repaired himself and get " << amount << "hit points back !"
				<< std::endl;
	hit_points += amount;
}

void	ClapTrap::displayInfo() {
	std::cout	<< std::endl
				<< "RESUME : "<< std::endl 
				<< "name : " << name << std::endl
				<< "hit points : " << hit_points << std::endl
				<< "energy_points : " << energy_points << std::endl;
}