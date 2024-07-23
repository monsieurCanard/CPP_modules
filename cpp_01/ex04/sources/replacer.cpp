/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:39:47 by anthony           #+#    #+#             */
/*   Updated: 2024/07/23 15:51:57 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

/**
 * @brief Replace all occurence of search in line by replace
 * @param line The line to modify
 * @param replace The string to replace search
 */
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
/**
 * @brief Print an error message and exit the program
 */
void	error_msg(std::string move, std::string filename) {
	std::cout	<< "Error: Couldn't "
				<< move
				<< " " << filename
				<< std::endl;
	exit(1);
}