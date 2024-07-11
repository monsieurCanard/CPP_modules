/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:32:48 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 12:46:06 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP


#include <string>
#include <iostream>

class Brain
{
	protected :
		std::string ideas[100];
	
	public:
		Brain(/* args */);
		~Brain();
		Brain(const Brain &src);
		Brain& operator=(const Brain& src);
};




# endif
