/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:13:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 14:50:49 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& src) {
	if (this != &src) {
	}
	return *this;
}

AMateria::AMateria(std::string const &type) : type(type) {
	std::cout << "AMateria parameter constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria use called" << std::endl;
	(void)target;
}
