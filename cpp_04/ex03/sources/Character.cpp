/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:36:41 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/11 14:49:09 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::~ICharacter() {
	std::cout << "Character destructor called" << std::endl;
}

std::string const & ICharacter::getName() const {
	return this->type;
}

void ICharacter::equip(AMateria* m) {
	
}

void 






