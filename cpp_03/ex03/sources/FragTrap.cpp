/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:06:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/25 18:00:31 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &src) {
	if (this != &src) {
		_hit_points = src._hit_points;
		_energy_points = src._energy_points;
		_attack_damage = src._attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << std::endl << PURPLE << "HIGH FIVES GUYS !" << RESET << std::endl;
}