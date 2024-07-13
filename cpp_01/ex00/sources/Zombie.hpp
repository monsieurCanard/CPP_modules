/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:51:14 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 09:44:59 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

Zombie* newZombie(const std ::string name);
void	randomChump(const std::string name);

# endif