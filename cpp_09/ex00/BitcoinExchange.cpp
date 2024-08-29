/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:50:54 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/29 16:31:21 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy) {
	if (this != &copy) {
		if (!this->_bitcoin.empty())
			this->_bitcoin.clear();
		this->_bitcoin = copy._bitcoin;
	}
	return *this;
}

std::map<std::string, double>	BitcoinExchange::getBitcoin() const {
	return _bitcoin;
}

std::string	BitcoinExchange::trimWhiteSpaces(std::string &line)
{
	size_t start = line.find_first_not_of(" \t");
	size_t end = line.find_last_not_of(" \t");
	return line.substr(start, end - start + 1);
}

std::map<std::string, double>	BitcoinExchange::readData(const char *file_name, std::string separator)
{
	std::map<std::string, double> data_file;

	std::ifstream file(file_name);
	if (!file.is_open())
		throw BitcoinExchange::CouldNotOpenFile();
	
	std::string line;
	
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string key = line.substr(0, line.find(separator));
		std::string value = line.substr(line.find(separator) + 1);

		key = trimWhiteSpaces(key);
		value = trimWhiteSpaces(value);

		data_file.insert(std::pair<std::string, double>(key, std::strtod(value.c_str(), NULL)));
	}
	return data_file;
}


void	BitcoinExchange::getAndDisplay(std::map<std::string, double> value_bitcoin, char **av)
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

		try {
			displayPrice(value_bitcoin, value, date);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}

void	BitcoinExchange::displayPrice(std::map<std::string, double> value_bitcoin, std::string &value, std::string &date) {

		double nb_bitcoin = std::strtod(value.c_str(), NULL);

		if (nb_bitcoin < 0)
			throw BitcoinExchange::NotPositifNumber();
		else if (nb_bitcoin > 1000)
			throw BitcoinExchange::TooLargeNumber();
		else if (value_bitcoin.find(date) != value_bitcoin.end())
			std::cout << date << " => " << nb_bitcoin << " = " << nb_bitcoin * value_bitcoin[date] << std::endl;
		else {
			std::map<std::string, double>::iterator it = value_bitcoin.lower_bound(date);
			if (it != value_bitcoin.begin()) {
				it--;
				std::cout << date << " => " << nb_bitcoin << " = " << nb_bitcoin * it->second << std::endl;
			}
			else
				std::cout << "Error: No data or lower data found for " << date << std::endl;
		}
}
