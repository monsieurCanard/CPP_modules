/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:37:58 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/30 16:27:50 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	
	Bureaucrat Boss("Boss", 1);
	Bureaucrat Rookie("Rookie", 150);

	
	std::cout << "Creating forms" << std::endl;
	PresidentialPardonForm PresidentialPardon("President");
	RobotomyRequestForm RobotomyRequest("Robot");
	ShrubberyCreationForm ShrubberyCreation("Shrubbery");

	try { 
		std::cout << "Signing forms BOSS" << std::endl;
		PresidentialPardon.beSigned(Boss);
		RobotomyRequest.beSigned(Boss);
		ShrubberyCreation.beSigned(Boss);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "Executing forms BOSS" << std::endl;
		PresidentialPardon.execute(Boss);
		RobotomyRequest.execute(Boss);
		ShrubberyCreation.execute(Boss);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	PresidentialPardonForm PresidentialPardon2("President");
	RobotomyRequestForm RobotomyRequest2("Robot");
	ShrubberyCreationForm ShrubberyCreation2("Shrubbery");

	try {
		std::cout << "GO Signing Presidential forms ROOKIE" << std::endl;
		PresidentialPardon2.beSigned(Rookie);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "GO Signing Robotomy forms ROOKIE" << std::endl;
		RobotomyRequest2.beSigned(Rookie);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "GO Signing Shrubbery forms ROOKIE" << std::endl;
		ShrubberyCreation2.beSigned(Rookie);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "Executing forms ROOKIE" << std::endl;
		PresidentialPardon2.execute(Rookie);
		RobotomyRequest2.execute(Rookie);
		ShrubberyCreation2.execute(Rookie);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

}