/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:21:25 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/09 16:50:55 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

static void	megaphone(string line = NULL)
{
	for (size_t i = 0; i < line.length(); i++) {
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
	return (0);
}
