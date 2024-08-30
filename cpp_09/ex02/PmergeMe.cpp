/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:13:32 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 16:25:48 by Monsieur_Ca      ###   ########.fr       */
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

void PmergeMe::displayTime(std::clock_t start, std::clock_t end, std::string &container_type)
{
	double time = (end - start);
	std::cout << "Time to process a range of " << _numbers.size() << " elements with std::" << container_type << ": " << time << "us" << std::endl;
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

void PmergeMe::mergeInsertSortList(std::list<std::pair<int, int> > &container)
{
	struct timeval start;

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
		{
			container.push_back(std::make_pair(_numbers[i], -1));
			i++;
		}
	}
	container.sort();
	std::string type = "list";
	finalPhase(container, type, start);
}

void PmergeMe::mergeInsertSortList(std::vector<std::pair<int, int> > &container)
{
	struct timeval start;

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
		{
			container.push_back(std::make_pair(_numbers[i], -1));
			i++;
		}
	}
	std::sort(container.begin(), container.end());
	std::string type = "vector";
	finalPhase(container, type, start);
}
