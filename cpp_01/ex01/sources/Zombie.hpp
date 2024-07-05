/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:18:40 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 10:48:06 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie {
	
	private :
		std::string name;

	public :
		Zombie();
		~Zombie();

		void	announce(void);
		void	setName(std::string name);
		static Zombie*	zombieHorde(int N, std::string name);
};

# endif