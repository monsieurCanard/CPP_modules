/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:06:07 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 10:49:14 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"

#include <string.h>
#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string	getType();
		void				setType(std::string new_type);
};

# endif