/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:14:23 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/31 15:44:57 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stdlib.h>
#include <exception>
#include <utility>
#include <sys/time.h>
#include <ctime>
#include <cctype>
#include <algorithm>

#define SUCCESS 0
#define FAILURE 1

#define NUMBER_DISPLAY 40

#define RESET "\033[0m"
#define RED "\033[38;5;196m"

class PmergeMe {

	private:
		std::vector<int>	_numbersVector;
		std::list<int>		_numbersList;
		int					_nb_elements;
	
	// * VECTOR SORT
		void	initAllNumbersVector(int ac, char **av);
		void	displayVectorNumbersBefore();
		void	putNumbersIntoVector(std::vector<int> &tab, char *str);
		void	insertSort(std::vector<std::pair<int, int> > &container);

	// * LIST SORT
		void	initAllNumbersList(int ac, char **av);
		void	displayListNumbersBefore();
		void	putNumbersIntoList(std::list<int> &tab, char *str);
		void	insertSort(std::list<std::pair<int, int> > &container);

	// * COMMON
		template <typename Container>
		void	finalPhase(Container &container, std::string &container_type, timespec &start);

		template <typename Container>
		void	displayNumbersAfter(Container &container);

		bool	comparePair(int first, int second);
		void	displayTime(long time_nsec, std::string &container_type);

	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		void	mergeInsertSort(std::list<std::pair<int, int> > &container, int ac, char **av);
		void	mergeInsertSort(std::vector<std::pair<int, int> > &container, int ac, char **av);

		class NegativeInputException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return RED"Invalid input, Negative number";
				}
		};
		class InvalidInputException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return RED"Invalid input, input is not a number";
				}
		};
		class DoubleInputException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return RED"Invalid input, Double number";
				}
		};
};

#include "PmergeMe.tpp"
