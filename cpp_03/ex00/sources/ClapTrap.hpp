/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:32:02 by anthony           #+#    #+#             */
/*   Updated: 2024/07/10 15:42:40 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string.h>
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &src);

		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	displayInfo();
		
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();

		void	setName(std::string name);
		void	setHitPoints(int hit_points);
		void	setEnergyPoints(int energy_points);
		void	setAttackDamage(int attack_damage);
};

# endif