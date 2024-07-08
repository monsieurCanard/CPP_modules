/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:41 by anthony           #+#    #+#             */
/*   Updated: 2024/07/08 11:02:49 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	
}

Harl::~Harl(){
	
}

void	Harl::debug() {
	std::cout	<<	"[DEBUG]" << std::endl;
	std::cout	<<	"Cat are gonna replace human because of us !" << std::endl
				<<	std::endl;
}

void	Harl::info() {
	std::cout	<<	"[INFO]" << std::endl;
	std::cout	<<	"Life is a b**** ! But you can repair it... With drugs !" << std::endl
				<<	std::endl;
}

void	Harl::warning() {
	std::cout	<<	"[WARNING]" << std::endl;
	std::cout	<<	"Human gonna fuck up the world ! But not now... this is just a warning !" << std::endl
				<<	std::endl;
}

void	Harl::error() {
	std::cout	<<	"[ERROR]" << std::endl;
	std::cout	<<	"4 8 15 16 23 42, system shut down !!" << std::endl
				<<	std::endl;
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
	std::cout << "I don't know this level, this is something... I can't understand..." << std::endl << "I'm a robot after all..." << std::endl;
}