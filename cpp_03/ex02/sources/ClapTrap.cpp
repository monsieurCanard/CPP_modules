/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:37:13 by anthony           #+#    #+#             */
/*   Updated: 2024/07/11 10:31:09 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	name = "none";
	hit_points = 0;
	energy_points = 0;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_points(10),
	energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
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
	else if (hit_points <= 0) std::cout << "ClapTrap " << name << " cannot attack because he's dead";
	else {
		std::cout << "ClapTrap " << name << " attacks " << target;
		energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	std::cout << ", causing " << amount << " points of damage !";
	if (hit_points < (int)amount) {
		std::cout << " Causing the death of " << name;
		attack_damage = 0;
	}
	std::cout << std::endl;
	hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points == 0) {
		std::cout << "ClapTrap " << name << " doesn't have enought energy points for repair" << std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << name
				<< " repaired himself and get " << amount << " hit points back !"
				<< std::endl;
	hit_points += amount;
	energy_points--;
}

void	ClapTrap::displayInfo() {
	std::cout	<< std::endl
				<< "RESUME : "<< std::endl 
				<< "name : " << name << std::endl
				<< "hit points : " << hit_points << std::endl
				<< "energy_points : " << energy_points << std::endl;
}

/// GETTER
std::string	ClapTrap::getName() {
	return name;
}

int	ClapTrap::getHitPoints() {
	return hit_points;
}

int	ClapTrap::getEnergyPoints() {
	return energy_points;
}

int	ClapTrap::getAttackDamage() {
	return attack_damage;
}

/// SETTER
void	ClapTrap::setName(std::string name) {
	this->name = name;
}

void	ClapTrap::setHitPoints(int hit_points) {
	this->hit_points = hit_points;
	if (hit_points < 0)
		this->hit_points = 0;
}

void	ClapTrap::setEnergyPoints(int energy_points) {
	this->energy_points = energy_points;
	if (energy_points < 0)
		this->energy_points = 0;
}

void	ClapTrap::setAttackDamage(int attack_damage) {
	this->attack_damage = attack_damage;
	if (attack_damage < 0)
		this->attack_damage = 0;
}