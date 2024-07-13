/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:13:26 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 11:36:31 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <string.h>
#include <iostream>

class	Harl {
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		
	public :
		Harl();
		~Harl();
		void	complain(std::string level);
		typedef void	(Harl::*HarlFunctions)();
};

# endif