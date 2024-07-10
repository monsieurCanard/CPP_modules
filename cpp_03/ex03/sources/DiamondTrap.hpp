/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:22:22 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/10 13:54:41 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class	DiamondTrap : public ScavTrap , public FragTrap {

	private :
		std::string name;
	
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap &src);
		
		void	whoAmI();
}
//TODO TROUVER LE MOYEN DE SET ET GET FACILEMENT 
# endif