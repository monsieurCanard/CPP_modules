/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:13:22 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/31 15:27:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	
	if (ac == 1 || av[1][0] == '\0') {
		std::cerr << TEAL << "Usage: ./pmerge [numbers]" << RESET << std::endl;
		return FAILURE;
	}
	
	std::list<std::pair<int, int> >		list;
	std::vector<std::pair <int, int> >	vect;
	
	try {
		PmergeMe merge_vect;
		merge_vect.mergeInsertSort(vect, ac, av);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}

	try {
		PmergeMe merge_list;
		merge_list.mergeInsertSort(list, ac, av);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}

	return SUCCESS;
}