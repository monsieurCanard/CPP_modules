/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:14:23 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 17:40:37 by anthony          ###   ########.fr       */
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

class PmergeMe {

	private:
		std::vector<int>				_numbers;

		void	putNumbersIntoVector(std::vector<int> &tab, char *str);
		void	displayTime(long time_usec, std::string &container_type);
		void	displayNumbersBefore();

		template <typename Container>
		void	displayNumbersAfter(Container &container);

		template <typename Container>
		void	insertSort(Container &container);

		template <typename Container>
		void	finalPhase(Container &container, std::string &container_type, timeval start);
		bool	comparePair(int first, int second);

	public :
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		void	initAllNumbers(int ac, char **av);
		void	mergeInsertSortList(std::list<std::pair<int, int> > &container);
		void	mergeInsertSortList(std::vector<std::pair<int, int> > &container);

		class NegativeInputException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Invalid input, Negative number";
				}
		};
		class InvalidInputException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Invalid input, input is not a number";
				}
		};
		class DoubleInputException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Invalid input, Double number";
				}
		};
};

template <typename Container>
void PmergeMe::displayNumbersAfter(Container &container)
{
	int display_max = 5;

	std::cout << "AFTER : ";
	for (typename Container::const_iterator it = container.begin(); it != container.end(); it++)
	{
		std::cout << it->first << " ";
		if (display_max == 0)
		{
			std::cout << "[...]";
			break;
		}
		display_max--;
	}
	std::cout << std::endl;
}

template <typename Container>
void PmergeMe::insertSort(Container &container)
{
	std::vector<std::pair<int, int> > temp;

	for (typename Container::iterator it = container.begin(); it != container.end(); it++)
	{
		int tmp = it->second;
		if (tmp == -1)
			continue;
		typename Container::iterator it2 = it;
		for (it2 = it; it2 != container.end() && tmp > it2->first; ++it2)
			;
		temp.push_back(std::make_pair(tmp, -1));
		it->second = -1;
	}
	for (typename std::vector<std::pair<int, int> >::iterator it = temp.begin(); it != temp.end(); ++it)
		container.insert(std::upper_bound(container.begin(), container.end(), *it), *it);
}

template <typename Container>
void PmergeMe::finalPhase(Container &container, std::string &container_type, timeval start)
{
	struct timeval	end;
	int				size_container_after;
	int				size_container_before;


	insertSort(container);

	size_container_before = container.size();
	container.erase(std::unique(container.begin(), container.end()), container.end());
	size_container_after = container.size();
	
	if (size_container_before != size_container_after)
		throw DoubleInputException();

	displayNumbersAfter(container);
	gettimeofday(&end, NULL);
	displayTime(end.tv_usec - start.tv_usec, container_type);
}