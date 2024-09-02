/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:32:33 by anthony           #+#    #+#             */
/*   Updated: 2024/09/02 12:10:28 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	
	if (ac < 2) {
		std::cout << "Usage: ./rpn \"[expression]\"" << std::endl;
		return FAILURE;
	}

	RPN			calculator;
	std::string expression = av[1];

	try {
		calculator.calculator(expression);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}
	return SUCCESS;
}