/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:13:26 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 11:05:03 by Monsieur_Ca      ###   ########.fr       */
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
		typedef void	(Harl::*HarlFunctions)();
		
	public :
		Harl();
		~Harl();
		void	complain(std::string level);
};

# endif