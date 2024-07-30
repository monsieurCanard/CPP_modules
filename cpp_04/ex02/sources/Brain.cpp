/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:35:50 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 12:07:52 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout	<< PURPLE
				<< "Brain default constructor called"
				<< RESET << std::endl;
}


Brain::~Brain() {
	std::cout << PURPLE
			  << "Brain destructor called"
			  << RESET << std::endl;
}

Brain&	Brain::operator=(const Brain& src) {
	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}

Brain::Brain(const Brain& src) {
	std::cout << PURPLE
			  << "Brain copy constructor called"
			  << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = src._ideas[i];
	}
}