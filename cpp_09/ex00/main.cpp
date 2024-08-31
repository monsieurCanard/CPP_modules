/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:11:51 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/31 12:22:35 by Monsieur_Ca      ###   ########.fr       */
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
		exchange.readData(DATA_FILE, ",");
		exchange.getAndDisplay(av);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}
	return SUCCESS;
}