/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:21:25 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/06/12 17:52:02 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::toupper;
using std::cout;
using std::endl;

static void	megaphone(string line = NULL)
{
	for (size_t i = 0; i < line.length(); i++) {
		cout << (char)toupper(line[i]);
	}
	return ;
}

int main(int ac, char **av)
{
	if (ac == 1) cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *\n";
	else {
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
	}
	cout << endl;
	return (0);
}