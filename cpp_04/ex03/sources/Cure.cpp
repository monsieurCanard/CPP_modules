/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:18:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 09:29:09 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &src) {
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

Cure::Cure(const Cure& src) : AMateria(src) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

AMateria* Cure::clone() const {
	std::cout << "Cure clone called" << std::endl;
	return new Cure(*this);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
