/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:10:02 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 10:07:43 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		_weapon;
		std::string	_name;
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack(void);
};

# endif