/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:19:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:51:24 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	_type = "Dog";
	std::cout << TEAL
			  << "Dog default constructor called"
			  << RESET << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& src) {
	std::cout << TEAL
			  << "Dog copy constructor called"
			  << RESET << std::endl;
	_brain = new Brain(*src._brain);
	*this = src;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src) {
		_type = src._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*src._brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << TEAL
			  << "Dog destructor called"
			  << RESET << std::endl;
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << TEAL << "WOOF WOOF !" << RESET << std::endl;
}