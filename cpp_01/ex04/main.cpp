/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:05:48 by anthony           #+#    #+#             */
/*   Updated: 2024/07/05 16:16:36 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <fstream>
#include <iostream>

std::string replacer(std::string line, std::string replace, std::string search) {
	
	std::string new_line;
	size_t		pos = 0;
	size_t		found_pos = 0;
	size_t		end = line.length();
	
	if (search.empty())
		return line;
	while (pos < end)
	{
		found_pos = line.find(search, pos);
		if (found_pos != std::string::npos) {
			new_line = line.substr(pos, found_pos - pos);
			new_line += replace;
			pos = found_pos + search.length();
		}
		else {
			new_line += line.substr(pos);
			break ;
		}
	}
	return new_line;
	
}

int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Wrong number of argument ! Please retry !" << std::endl;
		return (false);
	}
	std::string filename = av[1];
	std::string new_filename = filename + ".replace";

	//Creation du flux de lecture
	std::ifstream orignal_file(filename.c_str());
	if (!orignal_file) {
		std::cout << "Failed to open original file :" << filename << std::endl;
		return (false);
	}
	//Creation du flux d'ecriture
	std::ofstream outfile_flux(new_filename.c_str());
	if (!outfile_flux) {
		std::cout << "Failed to create outfile :" << new_filename << std::endl;
		return (false);
	}

	std::string line;
	std::string search = av[2];
	std::string replace = av[3];
	while (std::getline(orignal_file, line))
	{
		outfile_flux << replacer(line, replace, search);
		outfile_flux << "\n";
	}
}