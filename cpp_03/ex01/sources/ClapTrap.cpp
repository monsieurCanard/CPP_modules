/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:37:13 by anthony           #+#    #+#             */
/*   Updated: 2024/07/25 17:07:36 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("none"), _hit_points(0), _energy_points(0), _attack_damage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	if (this != &src) {
		_hit_points = src._hit_points;
		_energy_points = src._energy_points;
		_attack_damage = src._attack_damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	
	std::cout << RED;
	if (_energy_points == 0) std::cout << "ClapTrap " << _name << " doesn't have enought energy points";
	else if (_hit_points <= 0) std::cout << "ClapTrap " << _name << " cannot attack because he's dead";
	else {
		std::cout << "ClapTrap " << _name << " attacks " << target;
		_energy_points--;
	}
	std::cout << RESET;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	std::cout << ", causing " << RED << amount << RESET << " points of damage ";
	if (_hit_points < (int)amount) {
		std::cout << "and the death of " << _name;
		_attack_damage = 0;
		_hit_points = 0;
		_energy_points = 0;
	}
	else
		_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points == 0) {
		std::cout << "ClapTrap " << _name << " doesn't have enought energy points for repair" << std::endl;
		return ;
	}
	std::cout	<< TEAL << "ClapTrap " << _name
				<< " repaired himself and get " << amount << " hit points back !"
				<< RESET << std::endl;
	_hit_points += amount;
	_energy_points--;
}

/// GETTER
std::string	ClapTrap::getName() {
	return _name;
}

int	ClapTrap::getHitPoints() {
	return _hit_points;
}

int	ClapTrap::getEnergyPoints() {
	return _energy_points;
}

int	ClapTrap::getAttackDamage() {
	return _attack_damage;
}

/// SETTER
void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hit_points) {
	if (hit_points < 0)
		this->_hit_points = 0;
	else
		this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(int energy_points) {
	if (energy_points < 0)
		this->_energy_points = 0;
	else
		this->_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(int attack_damage) {
	if (attack_damage < 0)
		this->_attack_damage = 0;
	else
		this->_attack_damage = attack_damage;
}

void	ClapTrap::displayInfo() {
	std::cout	<< std::endl
				<< "RESUME : "<< std::endl 
				<< PURPLE << "name : " << _name << std::endl
				<< RED << "hit points : " << _hit_points << std::endl
				<< TEAL << "energy_points : " << _energy_points << RESET << std::endl;
}