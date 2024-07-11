/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:35:50 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 12:58:37 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}


Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& src) {
	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = src.ideas[i];
		}
	}
	return *this;
}

Brain::Brain(const Brain& src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = src.ideas[i];
	}
}