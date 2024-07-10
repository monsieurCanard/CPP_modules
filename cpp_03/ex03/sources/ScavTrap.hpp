/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:55:02 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/10 16:23:01 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& src);

		ScavTrap& operator=(const ScavTrap &src);

		void	guardGate();
		void	attack(const std::string& target);
};




# endif