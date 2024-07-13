/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:41 by anthony           #+#    #+#             */
/*   Updated: 2024/07/13 11:36:01 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	
}

Harl::~Harl(){
	
}

void	Harl::debug() {
	std::cout	<< "Cat are gonna replace human because of us !"
				<< std::endl;
}

void	Harl::info() {
	std::cout	<< "Life is a b**** ! But you can repair it... With drugs !"
				<< std::endl;
}

void	Harl::warning() {
	std::cout	<< "Human gonna fuck up the world ! But not now... "
				<< "this is just a warning !"
				<< std::endl;
}

void	Harl::error() {
	std::cout	<< "4 8 15 16 23 42, system shut down !!"
				<< std::endl;
}

void	Harl::complain(std::string level) {

	std::string		levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunctions	action[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*action[i])();
			return ;
		}
	}
	std::cout << "I don't know this level, this is something... I can't understand..." << std::endl << "I'm a robot after all..." << std::endl;
}