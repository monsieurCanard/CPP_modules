/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:13:32 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 17:53:20 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::~PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
	}
	return *this;
}

/**
 * ! DISPLAY
 */

void PmergeMe::displayNumbersBefore()
{
	std::cout << std::endl
			  << "BEFORE : ";
	int display_max = 5;
	for (size_t i = 0; i < _numbers.size(); i++)
	{
		std::cout << _numbers[i] << " ";
		if (display_max == 0)
		{
			std::cout << "[...]";
			break;
		}
		display_max--;
	}
	std::cout << std::endl;
}

void PmergeMe::displayTime(long time_usec, std::string &container_type)
{
	double time = time_usec;
	std::cout << "Time to process a range of " << _numbers.size() << " elements with std::" << container_type << ": " << time << "us" << std::endl;
}

/**
 * ! INIT
 */
void	PmergeMe::initAllNumbers(int ac, char **av) {
	
	std::string tmp;
	
	if (ac == 1)
		putNumbersIntoVector(_numbers, av[1]);
	else {
		for (int i = 1; i < ac; i++) {
			putNumbersIntoVector(_numbers, av[i]);
		}
	}
}

void	PmergeMe::putNumbersIntoVector(std::vector<int> &tab, char *numbers) {
	
	std::string str = numbers;
	std::string tmp;

	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == '-')
			throw NegativeInputException();
		if (str[i] == ' ') {
			tab.push_back(std::atoi(tmp.c_str()));
			tmp.clear();
		} else {
			tmp += str[i];
		}
		if (isdigit(str[i]) == 0)
			throw InvalidInputException();
	}
	tab.push_back(std::atoi(tmp.c_str()));
}

bool PmergeMe::comparePair(int first, int second) {
	if (first > second)
		return true;
	return false;
}

/**
 * ! MERGE (overload for list and vector)
 */

void PmergeMe::mergeInsertSortList(std::list<std::pair<int, int> > &container)
{
	struct timeval start;
	std::string type = "list";

	displayNumbersBefore();
	gettimeofday(&start, NULL);
	for (size_t i = 0; i < _numbers.size(); i++)
	{
		if (i + 1 != _numbers.size())
		{
			if (comparePair(_numbers[i], _numbers[i + 1]) == false)
				container.push_back(std::make_pair(_numbers[i], _numbers[i + 1]));
			else
				container.push_back(std::make_pair(_numbers[i + 1], _numbers[i]));
			i++;
		}
		else
			container.push_back(std::make_pair(_numbers[i], -1));
	}
	container.sort();
	finalPhase(container, type, start);
}

void PmergeMe::mergeInsertSortList(std::vector<std::pair<int, int> > &container)
{
	struct timeval	start;
	std::string		type = "vector";

	displayNumbersBefore();
	gettimeofday(&start, NULL);
	for (size_t i = 0; i < _numbers.size(); i++)
	{
		if (i + 1 != _numbers.size())
		{
			if (comparePair(_numbers[i], _numbers[i + 1]) == false)
				container.push_back(std::make_pair(_numbers[i], _numbers[i + 1]));
			else
				container.push_back(std::make_pair(_numbers[i + 1], _numbers[i]));
			i++;
		}
		else
			container.push_back(std::make_pair(_numbers[i], -1));
	}
	std::sort(container.begin(), container.end());
	finalPhase(container, type, start);
}
