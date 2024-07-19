/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:18:40 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 18:16:17 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"

#include <iostream>
#include <string.h>

class Zombie {
	
	private :
		std::string _name;

	public :
		Zombie();
		~Zombie();

		void	announce(void);
		void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

# endif