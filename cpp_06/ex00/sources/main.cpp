/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:04:53 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/31 13:38:03 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	
	if (ac != 2) {
		std::cout << "Usage: ./convert [value]" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}