/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:13:22 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/08/30 18:25:54 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	
	if (ac == 1) {
		std::cerr << "Usage: ./pmerge [numbers]" << std::endl;
		return FAILURE;
	}
	
	PmergeMe merge;
	std::list<std::pair<int, int> > list;
	std::vector<std::pair <int, int> > vect;
	
	try {
		merge.initAllNumbers(ac, av);
		merge.mergeInsertSortList(list);
		merge.mergeInsertSortList(vect);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return FAILURE;
	}
	return SUCCESS;
}