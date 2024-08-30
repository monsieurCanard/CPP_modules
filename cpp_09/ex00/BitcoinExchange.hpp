/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:48:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 18:50:22 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define SUCCESS 0
#define FAILURE 1

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"


#include <map>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


class BitcoinExchange {

	private :
		std::map<std::string, double> _bitcoin;
		std::map<std::string, double> _value_bitcoin;

		void		displayPrice(std::string &value, std::string &date);
		std::string	trimWhiteSpaces(std::string &line);
	
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		void readData(const char *file_name, std::string separator);
		std::map<std::string, double> getBitcoin() const;
		void getAndDisplay(char **av);
};

class NotPositifNumber : public std::exception {
	public :
		virtual const char *what() const throw() {
			return RED"Error: Not a positive number\033[0m";
		}
};

	class TooLargeNumber : public std::exception {
	public :
		virtual const char *what() const throw() {
			return RED"Error: Too large number\033[0m";
		}
};

	class CouldNotOpenFile : public std::exception {
	public :
		virtual const char *what() const throw() {
			return RED"Error: Could not open file\033[0m";
		}
};

	class LowerDataNotFound : public std::exception {
	public :
		virtual const char *what() const throw() {
			return RED"Error: Data rate for this date not found\033[0m";
		}
};