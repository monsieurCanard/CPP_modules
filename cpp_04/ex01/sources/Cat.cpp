/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:28:29 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:53:25 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal() {
	std::cout	<< ORANGE
				<< "Cat default constructor called"
				<< RESET << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& src) {
	std::cout	<< ORANGE
				<< "Cat copy constructor called"
				<< RESET << std::endl;
	_brain = new Brain(*src._brain);
	*this = src;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src) {
		_type = src._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << ORANGE
			  << "Cat destructor called"
			  << RESET << std::endl;
	delete _brain;
}

void	Cat::makeSound() const {
	std::cout << ORANGE << "MIAOU MIAOU !" << RESET << std::endl;
}