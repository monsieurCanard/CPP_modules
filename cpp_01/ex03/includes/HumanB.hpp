/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:18:24 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 10:15:14 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		_weapon;
		std::string	_name;
	
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon& weapon);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

# endif