/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:32:08 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:26:37 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	_type = "WrongAnimal";
	std::cout	<< OLIVE
				<< "WrongAnimal default constructor called"
				<< RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << OLIVE
			  << "WrongAnimal copy constructor called"
			  << RESET << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << OLIVE
			  << "WrongAnimal destructor called"
			  << RESET << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << OLIVE << "WrongAnimal make weird sound !" << RESET << std::endl;
}

std::string	WrongAnimal::getType() const {
	return _type;
}