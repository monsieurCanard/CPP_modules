/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:06:07 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 10:07:42 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string getType();
		void		setType(std::string new_type);
};

# endif