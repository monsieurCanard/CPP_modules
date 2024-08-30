/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:13:22 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 16:20:19 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/**
 * ! Pour verifier les doublons, on verifira quand list sera triee
 * ! avec la fonction unique du container list
 */

int main(int ac, char **av) {
	
	if (ac == 1) {
		std::cerr << "Usage: ./pmerge [numbers]" << std::endl;
		return 1;
	}
	
	PmergeMe merge;
	std::list<std::pair<int, int> > list;
	std::vector<std::pair <int, int> > vect;
	try {
		merge.initAllNumbers(ac, av);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}

	try {
		merge.mergeInsertSortList(list);
		merge.mergeInsertSortList(vect);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}

	return SUCCESS;
}