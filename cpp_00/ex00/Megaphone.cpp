/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:21:25 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 12:12:11 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>


/**
 * @brief Verify if the character is printable and convert it to uppercase
 */
static void	megaphone(std::string line = NULL) {
	for (size_t i = 0; i < line.length(); i++) {
		if (isprint(line[i]))
			std::cout << (char)toupper(line[i]);
	}
}

int main(int ac, char **av)
{
	if (ac == 1) std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	}
	std::cout << std::endl;
}