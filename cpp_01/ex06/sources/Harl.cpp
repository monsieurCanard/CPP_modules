/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:41 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 16:09:17 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	
}

Harl::~Harl(){
	
}

void	Harl::debug() {
	std::cout	<< std::endl << PINK << "[ DEBUG ]" << std::endl
				<< "Cat are gonna replace us !"
				<< RESET << std::endl;
}

void	Harl::info() {
	std::cout	<< std::endl << PURPLE << "[ INFO ]" << std::endl
				<< "Life is a b**** ! But you can repair it... With drugs !"
				<< RESET << std::endl;
}

void	Harl::warning() {
	std::cout	<< std::endl << BLUE << "[ WARNING ]" << std::endl
				<< "Human gonna fuck up the world ! But not now... "
				<< "this is just a warning !"
				<< RESET << std::endl;
}

void	Harl::error() {
	std::cout	<< std::endl << TEAL << "[ ERROR ]" << std::endl
				<< "4 8 15 16 23 42, system shut down !!"
				<< RESET << std::endl;
}


void	Harl::complain(std::string level) {

	std::string		levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunctions	action[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			switch(i) {
				case(0) :
					(this->*action[0])();
					(this->*action[1])();
					(this->*action[2])();
					(this->*action[3])();
					return ;
				case(1) :
					(this->*action[1])();
					(this->*action[2])();
					(this->*action[3])();
					return ;
				case(2) :
					(this->*action[2])();
					(this->*action[3])();
					return ;
				case(3) :
					(this->*action[3])();
					return ;
			}
		}
	}
	std::cout	<< RED << "I don't know this level, this is something... I can't understand..."
				<< std::endl << "I'm a robot after all... I just like complaining about insignificant things..." 
				<< RESET << std::endl;
}