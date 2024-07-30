/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:13:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 12:33:54 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
	_type = "none";
	
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
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
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
