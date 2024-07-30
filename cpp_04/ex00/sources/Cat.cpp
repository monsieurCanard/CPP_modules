/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:28:29 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:32:35 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	_type = "Cat";
	std::cout	<< ORANGE
				<< "Cat default constructor called"
				<< RESET << std::endl;
}

Cat::Cat(const Cat& src) {
	std::cout	<< ORANGE
				<< "Cat copy constructor called"
				<< RESET << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << ORANGE
			  << "Cat copy destructor called"
			  << RESET << std::endl;
}

void	Cat::makeSound() const {
	std::cout << ORANGE << "MIAOU MIAOU !" << RESET << std::endl;
}