/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:48:45 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/08 15:08:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib>

class BitcoinExchange {

	private :
		std::map<std::string, double> _bitcoin;
		std::string trimWhiteSpaces(std::string &line);
	
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);

		std::map<std::string, double> getBitcoin() const;
		std::map<std::string, double> readFile(const char *file_name, std::string separator);




	class NotPositifNumber : public std::exception {
		public :
			virtual const char *what() const throw() {
				return "Error: Not a positive number";
			}
	};

	class BadInput : public std::exception {
		public :
			virtual const char *what() const throw() {
				return "Error: Bad input";
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