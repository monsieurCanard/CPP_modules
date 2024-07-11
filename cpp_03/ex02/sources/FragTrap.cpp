/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:06:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 10:41:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "Default constructor of FragTrap called" << std::endl;
	name = "none";
	hit_points = 0;
	energy_points = 0;
	attack_damage = 0;
	
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &src) {
	if (this != &src) {
		hit_points = src.hit_points;
		energy_points = src.energy_points;
		attack_damage = src.attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "HIGH FIVES GUYS !" << std::endl;
}