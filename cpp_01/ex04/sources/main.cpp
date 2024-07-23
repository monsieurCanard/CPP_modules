/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:05:48 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 09:33:16 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Wrong number of argument ! Please retry !" << std::endl;
		return (false);
	}
	std::string filename = av[1];
	
	/// Open the file
	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) error_msg("open", filename);
	
	/// Create the new file and check if it's open
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open()) error_msg("open", filename + ".replace");

	std::string line;
	std::string search(av[2]);
	std::string replace(av[3]);
	while (std::getline(infile, line))
	{
		outfile << replacer(line, replace, search);
		outfile << "\n";
	}
}