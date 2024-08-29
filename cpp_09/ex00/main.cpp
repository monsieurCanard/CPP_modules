/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:11:51 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/29 14:49:32 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string trimWhiteSpaces(std::string &line)
{
	size_t start = line.find_first_not_of(" \t");
	size_t end = line.find_last_not_of(" \t");
	return line.substr(start, end - start + 1);
}

void displayPrice(std::map<std::string, double> value_bitcoin, char **av)
{
	std::ifstream file(av[1]);
	if (!file.is_open())
		throw BitcoinExchange::CouldNotOpenFile();

	std::string line;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string date = line.substr(0, line.find("|"));
		if (date.length() == line.length()) {
			std::cout << "Error: Bad input ==> " << date << std::endl;
			continue;
		}
		std::string value = line.substr(line.find("|") + 1);

		date = trimWhiteSpaces(date);
		value = trimWhiteSpaces(value);

		double nb_bitcoin = std::strtod(value.c_str(), NULL);
		if (nb_bitcoin < 0)
			std::cout << "Error: Not a positive number" << std::endl;
		else if (nb_bitcoin > 1000)
			std::cout << "Error: Too large number" << std::endl;
		else if (value_bitcoin.find(date) != value_bitcoin.end())
			std::cout << date << " => " << nb_bitcoin << " = " << nb_bitcoin * value_bitcoin[date] << std::endl;
		else {
			std::map<std::string, double>::iterator it = value_bitcoin.lower_bound(date);
			if (it != value_bitcoin.begin())
				--it;

			std::cout << date << " => " << nb_bitcoin << " = " << nb_bitcoin * it->second << std::endl;
		}
	}
}

int main(int ac, char **av) {

	if (ac != 2) {
		std::cerr << "Usage: ./bitcoin [file_name]" << std::endl;
		return 1;
	}
	
	BitcoinExchange exchange;

	std::map<std::string, double> value_bitcoin = exchange.readFile("data.csv", ",");

	displayPrice(value_bitcoin, av);
	return 0;
}