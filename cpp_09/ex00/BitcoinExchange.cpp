/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:50:54 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 18:49:52 by anthony          ###   ########.fr       */
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

void	BitcoinExchange::readData(const char *file_name, std::string separator)
{

	std::ifstream file(file_name);
	if (!file.is_open())
		throw CouldNotOpenFile();
	
	std::string line;
	
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string key = line.substr(0, line.find(separator));
		std::string value = line.substr(line.find(separator) + 1);

		key = trimWhiteSpaces(key);
		value = trimWhiteSpaces(value);

		if (key.length() == line.length() || value.length() == line.length())
			throw CouldNotOpenFile();

		_value_bitcoin.insert(std::pair<std::string, double>(key, std::strtod(value.c_str(), NULL)));
	}
}


void	BitcoinExchange::getAndDisplay(char **av)
{
	std::ifstream file(av[1]);
	if (!file.is_open())
		throw CouldNotOpenFile();

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string date = line.substr(0, line.find("|"));
		if (date.length() == line.length()) {
			std::cout	<< RED << "Error: Bad input ==> "
						<< ORANGE << date
						<< RESET << std::endl;
			continue;
		}
		std::string value = line.substr(line.find("|") + 1);

		date = trimWhiteSpaces(date);
		value = trimWhiteSpaces(value);

		try {
			displayPrice(value, date);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}

void	BitcoinExchange::displayPrice(std::string &value, std::string &date) {

		std::map<std::string, double>::iterator it;
		double									final_rate;
		double nb_bitcoin = std::strtod(value.c_str(), NULL);

		if (nb_bitcoin < 0)
			throw NotPositifNumber();
		if (nb_bitcoin > 1000)
			throw TooLargeNumber();

		if (_value_bitcoin.find(date) != _value_bitcoin.end())
			final_rate = nb_bitcoin * _value_bitcoin[date];
		else
		{
			it = _value_bitcoin.lower_bound(date);
			if (it == _value_bitcoin.begin())
				throw LowerDataNotFound();
			it--;
			final_rate = nb_bitcoin * it->second;
		}
			
		std::cout	<< ORANGE << date
					<< PURPLE << " => "
					<< ORANGE << nb_bitcoin
					<< PURPLE << " = "
					<< TEAL << nb_bitcoin * final_rate
					<< RESET << std::endl;
}
