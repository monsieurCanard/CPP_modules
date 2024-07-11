/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:32:02 by anthony           #+#    #+#             */
/*   Updated: 2024/07/11 10:52:27 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap& src);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &src);

		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	displayInfo();
		
		virtual std::string	getName();
		int					getHitPoints();
		int					getEnergyPoints();
		int					getAttackDamage();

		void	setName(std::string newName);
		void	setHitPoints(int newHitPoints);
		void	setEnergyPoints(int newEnergyPoints);
		void	setAttackDamage(int newAttackDamage);
};

# endif