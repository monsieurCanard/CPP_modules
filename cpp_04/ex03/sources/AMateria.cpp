/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:13:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 16:37:03 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
	type = "none";
	
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
	std::cout << "AMateria parameter constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria&	AMateria::operator=(const AMateria &src) {
	if (this != &src) {
	}
	return *this;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	if (getType().length() == 4) std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else if (getType().length() == 3) std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else std::cout << "Unknown type of materia" << std::endl;
}
