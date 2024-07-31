/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:48:26 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 06:50:39 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

	try {
		Bureaucrat me("Bureaucrat", 155);
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}


	std::cout << std::endl << std::endl;


	Bureaucrat boss("BOSS", 1);
	std::cout << boss << "and we try to increment his grade" << std::endl;
	try {
		boss.incrementGrade();
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;


	Bureaucrat rookie("Rookie", 150);
	std::cout << rookie << "and we try to decrement his grade" << std::endl;
	try {
		rookie.decrementGrade();
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	return 0;
}