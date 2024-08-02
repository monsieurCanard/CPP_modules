/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:48:26 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 12:31:19 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

	try {
		Bureaucrat me("Bureaucrat", 155);
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

/**
 * ! Test Boss Grade
 */

	Bureaucrat boss("BOSS", 1);

	std::cout << boss << "and we try to increment his grade" << std::endl;
	try {
		boss.incrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;


/**
 * ! Test Rookie Grade
 */

	Bureaucrat rookie("Rookie", 150);
	
	std::cout << rookie << "and we try to decrement his grade" << std::endl;
	
	try {
		rookie.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	return 0;
}