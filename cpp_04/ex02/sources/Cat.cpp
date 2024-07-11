/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:28:29 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 12:55:49 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& src) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
	*this = src;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src) {
		type = src.type;
		if (brain) delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "MIAOU MIAOU !" << std::endl;
}