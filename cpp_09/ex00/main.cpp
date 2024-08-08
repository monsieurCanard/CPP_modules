/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:11:51 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/08 15:39:00 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void displayPrice(std::map<std::string, double> user_bitcoin, std::map<std::string, double> value_bitcoin)
{
	std::map<std::string, double>::iterator it;

	for (it = user_bitcoin.begin(); it != user_bitcoin.end(); it++)
	{
		if (it->second < 0)
			std::cout << it->first << " : " << it->second << " => " << "Error: Not a positive number" << std::endl;
		else if (it->second > 1000)
			std::cout << "Error: Too large number" << std::endl;
		else if (it->second == 0)
			std::cout << "Error: Bad input =>" << it->first << std::endl;
		else if (value_bitcoin[it->first] == 0) {
			std::cout	<< value_bitcoin.lower_bound(it->first)->first << " : " << value_bitcoin.lower_bound(it->first)->second
						<< " = " << it->second * value_bitcoin.lower_bound(it->first)->second << std::endl;}
		else
			std::cout	<< it->first << " : " << it->second << " = " << it->second * value_bitcoin[it->first] << std::endl;
	}
}
int main(int ac, char **av) {

	if (ac != 2) {
		std::cerr << "Usage: ./bitcoin [file_name]" << std::endl;
		return 1;
	}
	
	BitcoinExchange exchange;

	
	std::map<std::string, double> user_bitcoin = exchange.readFile(av[1], "|");
	std::map<std::string, double> value_bitcoin = exchange.readFile("data.csv", ",");

	displayPrice(user_bitcoin, value_bitcoin);
	return 0;
}