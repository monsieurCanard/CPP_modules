/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:10:03 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 14:36:36 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice& Ice::operator=(const Ice &src) {
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}

AMateria* Ice::clone() const {
	std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getType() << std::endl;
	AMateria::use(target);
}

