/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:10:03 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 08:20:01 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice& Ice::operator=(const Ice &src) {
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

AMateria* Ice::clone() const {
	std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
