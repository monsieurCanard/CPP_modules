/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:06:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/10 11:10:42 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "Constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap() {
}

void	FragTrap::highFivesGuys() {
	std::cout << "HIGH FIVES GUYS !" << std::endl;
}