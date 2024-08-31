/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:32:33 by anthony           #+#    #+#             */
/*   Updated: 2024/08/31 10:56:11 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	
	if (ac < 2) {
		std::cout << "Usage: ./rpn \"[expression]\"" << std::endl;
		return FAILURE;
	}

	RPN calculator;

	try {
		calculator.calculator(av[1]);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}
	return SUCCESS;
}