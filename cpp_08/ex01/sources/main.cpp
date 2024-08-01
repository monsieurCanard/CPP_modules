/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:50:35 by anthony           #+#    #+#             */
/*   Updated: 2024/08/01 14:16:34 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	unsigned int tab[] = {1, 2, 3, 4, 5};

	std::vector<unsigned int> vect(tab, tab + sizeof(tab) / sizeof(tab[0]));
	sp.addNumbers(vect.begin(), vect.end());
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}