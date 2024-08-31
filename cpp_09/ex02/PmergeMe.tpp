/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:01:53 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/31 15:32:42 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
void PmergeMe::displayNumbersAfter(Container &container)
{
	int display_max = NUMBER_DISPLAY;

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
	std::cout << std::endl << std::endl;
}

template <typename Container>
void PmergeMe::finalPhase(Container &container, std::string &container_type, timespec &start)
{
	struct timespec end;
	int size_container_after;
	int size_container_before;

	insertSort(container);

	size_container_before = container.size();
	container.erase(std::unique(container.begin(), container.end()), container.end());
	size_container_after = container.size();

	if (size_container_before != size_container_after)
		throw DoubleInputException();

	clock_gettime(CLOCK_REALTIME, &end);
	displayNumbersAfter(container);
	displayTime(end.tv_nsec - start.tv_nsec, container_type);
}