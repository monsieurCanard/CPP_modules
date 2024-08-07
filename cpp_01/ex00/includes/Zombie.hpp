/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:51:14 by anthony           #+#    #+#             */
/*   Updated: 2024/07/25 09:57:28 by Monsieur_Ca      ###   ########.fr       */
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
#include <string>
#include <iomanip>

class Zombie {

	private :
		std::string	_name;

	public :
		Zombie();
		Zombie(const std::string name);
		~Zombie();

		void	announce(void);
};

Zombie*	newZombie(const std ::string name);
void	randomChump(const std::string name);

# endif