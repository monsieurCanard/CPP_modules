/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:13:26 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 15:59:00 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#define PINK "\033[38;5;205m"
#define PURPLE "\033[38;5;129m"
#define BLUE "\033[38;5;75m"
#define TEAL "\033[38;5;48m"
#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define RESET "\033[0m"

#include <string.h>
#include <iostream>

class	Harl {
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
/** 
 * * @brief Function pointer to Harl functions
 * ! This is a pointer to a function that takes no arguments and returns void
 */
		typedef void	(Harl::*HarlFunctions)();
		
	public :
		Harl();
		~Harl();
		void	complain(std::string level);
};

# endif