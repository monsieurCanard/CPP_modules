/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:37:58 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/02 09:52:53 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void) {
	
	Bureaucrat michel("michel", 1);
	Bureaucrat jean("jean", 150);
	Form form("Plan de scene", 1, 1);

	std::cout << std::endl << form << std::endl;
	try {
		michel.signForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		jean.signForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		michel.signForm(form);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << form << std::endl;
	std::cout << std::endl;
	return 0;
}