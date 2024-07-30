/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:35:30 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/29 11:26:00 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	_type = "WrongCat";
	std::cout	<< PURPLE 
				<< "WrongCat default constructor called"
				<< RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
	std::cout << PURPLE
			  << "WrongCat copy constructor called"
			  << RESET << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << PURPLE
			  << "WrongCat destructor called"
			  << RESET << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << PURPLE << "WRONG MIAOU MIAOU !" << RESET << std::endl;
}