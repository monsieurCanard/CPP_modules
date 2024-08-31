/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:13:32 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/31 15:48:20 by Monsieur_Ca      ###   ########.fr       */
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
 * ! VECTOR SORT
 */
void	PmergeMe::initAllNumbersVector(int ac, char **av) {
	
	std::string tmp;
	
	_nb_elements = 0;
	if (ac == 1)
		putNumbersIntoVector(_numbersVector, av[1]);
	else {
		for (int i = 1; i < ac; i++) {
			putNumbersIntoVector(_numbersVector, av[i]);
		}
	}
}

void	PmergeMe::putNumbersIntoVector(std::vector<int> &tab, char *numbers) {
	
	std::string str = numbers;
	std::string tmp;

	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == '-') {
			throw NegativeInputException();
		}
		if (str[i] == ' ') {
			if (!tmp.empty()) {
				tab.push_back(std::atoi(tmp.c_str()));
				tmp.clear();
			}
		} else {
			if (isdigit(str[i]) == 0) {
				throw InvalidInputException();
			}
			tmp += str[i];
		}
	}
	if (tmp.empty() == false)
		tab.push_back(std::atoi(tmp.c_str()));
	_nb_elements = tab.size();
}

void PmergeMe::mergeInsertSort(std::vector<std::pair<int, int> > &container, int ac, char **av)
{
	struct timespec start;
	std::string type = "vector";

	clock_gettime(CLOCK_REALTIME, &start);
	initAllNumbersVector(ac, av);
	displayVectorNumbersBefore();
	for (size_t i = 0; i < _numbersVector.size(); i++)
	{
		if (i + 1 != _numbersVector.size())
		{
			if (comparePair(_numbersVector[i], _numbersVector[i + 1]) == false)
				container.push_back(std::make_pair(_numbersVector[i], _numbersVector[i + 1]));
			else
				container.push_back(std::make_pair(_numbersVector[i + 1], _numbersVector[i]));
			i++;
		}
		else
			container.push_back(std::make_pair(_numbersVector[i], -1));
	}
	std::sort(container.begin(), container.end());
	finalPhase(container, type, start);
}

void PmergeMe::insertSort(std::vector<std::pair<int, int> > &container)
{
	std::vector<std::pair<int, int> > temp;

	for (std::vector<std::pair<int, int> >::iterator it = container.begin(); it != container.end(); it++)
	{
		int tmp = it->second;
		if (tmp == -1)
			continue;
		temp.push_back(std::make_pair(tmp, -1));
		it->second = -1;
	}
	for (std::vector<std::pair<int, int> >::iterator it = temp.begin(); it != temp.end(); ++it)
		container.insert(std::upper_bound(container.begin(), container.end(), *it), *it);
}

/**
 * ! LIST SORT 
 */
void	PmergeMe::initAllNumbersList(int ac, char **av) {
	
	std::string tmp;
	
	_nb_elements = 0;
	if (ac == 1)
		putNumbersIntoList(_numbersList, av[1]);
	else {
		for (int i = 1; i < ac; i++) {
			putNumbersIntoList(_numbersList, av[i]);
		}
	}
}

void	PmergeMe::putNumbersIntoList(std::list<int> &tab, char *numbers) {
	
	std::string str = numbers;
	std::string tmp;

	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == '-')
			throw NegativeInputException();
		if (str[i] == ' ') {
			tab.push_back(std::atoi(tmp.c_str()));
			tmp.clear();
		} else {
			if (isdigit(str[i]) == 0)
				throw InvalidInputException();
			tmp += str[i];
		}
		_nb_elements++;
	}
	tab.push_back(std::atoi(tmp.c_str()));
	_nb_elements = tab.size();
}

void PmergeMe::mergeInsertSort(std::list<std::pair<int, int> > &container, int ac, char **av)
{
	struct timespec	start;
	std::string		type = "list";

	clock_gettime(CLOCK_REALTIME, &start);
	initAllNumbersList(ac, av);
	displayListNumbersBefore();

	std::list<int>::iterator it = _numbersList.begin();
	while (it != _numbersList.end())
	{
		int tmp = *it;
		++it;
		if (it != _numbersList.end())
		{
			int tmp2 = *it;
			if (comparePair(tmp, tmp2) == false)
				container.push_back(std::make_pair(tmp, tmp2));
			else
				container.push_back(std::make_pair(tmp2, tmp));
			++it;
		}
		else
			container.push_back(std::make_pair(tmp, -1));
	}
	container.sort();
	finalPhase(container, type, start);
}

void PmergeMe::insertSort(std::list<std::pair<int, int> > &container)
{
	for (std::list<std::pair<int, int> >::iterator it = container.begin(); it != container.end(); it++)
	{
		int tmp = it->second;
		if (tmp == -1)
			continue;
		std::list<std::pair<int, int> >::iterator it2 = it;
		for (it2 = it; it2 != container.end() && tmp > it2->first; ++it2)
			;
		container.insert(it2, std::make_pair(tmp, -1));
		it->second = -1;
	}
}

/**
 * ! UTILS
 */
bool PmergeMe::comparePair(int first, int second) {
	if (first > second)
		return true;
	return false;
}

void PmergeMe::displayTime(long time_nsec, std::string &container_type)
{
	double time = time_nsec;
	time /= 1000000;
	std::cout << "Time to process a range of "
			  << _nb_elements
			  << " elements with std::"
			  << container_type
			  << ": "
			  << time
			  << "ms" << std::endl;
}

void PmergeMe::displayVectorNumbersBefore()
{
	std::cout << "BEFORE : ";
	int display_max = NUMBER_DISPLAY;
	for (size_t i = 0; i < _numbersVector.size(); i++)
	{
		std::cout << _numbersVector[i] << " ";
		if (display_max == 0)
		{
			std::cout << "[...]";
			break;
		}
		display_max--;
	}
	std::cout << std::endl;
}

void	PmergeMe::displayListNumbersBefore() {
	std::cout	<< std::endl
				<< "BEFORE : ";
	int display_max = NUMBER_DISPLAY;
	for (std::list<int>::iterator it = _numbersList.begin(); it != _numbersList.end(); it++)
	{
		std::cout << *it << " ";
		if (display_max == 0)
		{
			std::cout << "[...]";
			break;
		}
		display_max--;
	}
	std::cout << std::endl;
}