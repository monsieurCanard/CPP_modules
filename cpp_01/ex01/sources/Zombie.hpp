/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:18:40 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 09:52:56 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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