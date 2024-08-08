/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:50:54 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/08 15:11:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
	if (this != &copy) {
		if (!this->_bitcoin.empty())
			this->_bitcoin.clear();
		this->_bitcoin = copy._bitcoin;
	}
	return *this;
}

std::map<std::string, double> BitcoinExchange::getBitcoin() const {
	return _bitcoin;
}


std::string	BitcoinExchange::trimWhiteSpaces(std::string &line) {
	size_t start = line.find_first_not_of(" \t");
	size_t end = line.find_last_not_of(" \t");
	return line.substr(start, end - start + 1);
}

std::map<std::string, double> BitcoinExchange::readFile(const char *file_name, std::string separator)
{
	std::map<std::string, double> data_file;


	std::ifstream file(file_name);
	if (!file.is_open())
		throw BitcoinExchange::CouldNotOpenFile();
	
	std::string line;
	
	std::getline(file, line);
	while (std::getline(file, line))
	{
		// std::cout << line << std::endl;
		std::string key = line.substr(0, line.find(separator));
		std::string value = line.substr(line.find(separator) + 1);

		key = trimWhiteSpaces(key);
		// std::cout << "key :" << key << std::endl;
		value = trimWhiteSpaces(value);
		// std::cout << "value :" << value << std::endl;

		
		data_file[key] = std::strtod(value.c_str(), NULL);
		// std::cout << key << ":" << data_file[key] << std::endl;
	}
	return data_file;
}



