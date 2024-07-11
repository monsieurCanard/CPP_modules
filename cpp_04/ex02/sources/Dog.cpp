/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:19:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 12:55:57 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& src) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
	*this = src;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src) {
		type = src.type;
		if (brain) delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound() const {
	std::cout << "WOOF WOOF !" << std::endl;
}