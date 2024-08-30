/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:11:51 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 18:50:00 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	if (ac != 2) {
		std::cerr << "Usage: ./bitcoin [file_name]" << std::endl;
		return FAILURE;
	}
	
	BitcoinExchange exchange;

	try {
		exchange.readData("data.csv", ",");
		exchange.getAndDisplay(av);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}
	return SUCCESS;
}