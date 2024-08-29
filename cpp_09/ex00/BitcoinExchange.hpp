/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:48:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/29 16:28:03 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

class BitcoinExchange {

	private :
		std::map<std::string, double> _bitcoin;
		std::string trimWhiteSpaces(std::string &line);
		void displayPrice(std::map<std::string, double> value_bitcoin, std::string &value, std::string &date);
	
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		std::map<std::string, double> getBitcoin() const;
		std::map<std::string, double> readData(const char *file_name, std::string separator);
		void getAndDisplay(std::map<std::string, double> value_bitcoin, char **av);


	class NotPositifNumber : public std::exception {
		public :
			virtual const char *what() const throw() {
				return "Error: Not a positive number";
			}
	};

	class TooLargeNumber : public std::exception {
		public :
			virtual const char *what() const throw() {
				return "Error: Too large number";
			}
	};

	class CouldNotOpenFile : public std::exception {
		public :
			virtual const char *what() const throw() {
				return "Error: Could not open file";
			}
	};
};