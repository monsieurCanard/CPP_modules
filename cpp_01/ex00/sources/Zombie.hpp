/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:51:14 by anthony           #+#    #+#             */
/*   Updated: 2024/07/09 17:28:39 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
	
	private :
		std::string	name;

	public :
		Zombie();
		~Zombie();

		void	announce(void);

		static Zombie* newZombie(std ::string name);
		static void	randomChump(std::string name);
};

# endif