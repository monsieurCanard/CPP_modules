/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:48:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/09/02 10:54:39 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define SUCCESS 0
#define FAILURE 1


#define FLOAT_MAX 1000
#define FLOAT_MIN 0

#define DATA_FILE "data.csv"

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
#include <sstream>
#include <typeinfo>
#include <cfloat>


class BitcoinExchange {

	private :
		std::map<std::string, double>	_bitcoin;
		std::map<std::string, double>	_value_bitcoin;

		void		readData(const char *file_name, std::string separator);
		void		displayPrice(std::string &value, std::string &date);
		std::string	trimWhiteSpaces(std::string &line);
		bool		lineIsValid(std::string &key, std::string &value, const std::string &line);
	
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		std::map<std::string, double>	getBitcoin() const;
		std::map<std::string, double>	getValueBitcoin() const;
		void							getAndDisplay(char **av);
};

/**
 * ! EXCEPTIONS
 */

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
			return RED"Error: Invalid Data File\033[0m";
		}
};
	class InvalidInputFile : public std::exception {
	public :
		virtual const char *what() const throw() {
			return RED"Error: Invalid Input File\033[0m";
		}
};

	class LowerDataNotFound : public std::exception {
	public :
		virtual const char *what() const throw() {
			return RED"Error: No exchange rate for this date\033[0m";
		}
};