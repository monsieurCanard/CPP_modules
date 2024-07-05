/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:55:41 by anthony           #+#    #+#             */
/*   Updated: 2024/07/04 16:44:06 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_utils.hpp"

std::string	GetAnswer(std::string needed) {
	
	std::string line;
	
	while (true)
	{
		std::cout << "Enter your ";
		std::cout << needed;
		std::cout << " : " << std::endl;
		std::getline(std::cin, line);
		if (line.length() == 0) {
			std::cout << "Invalid answer please retry..." << std::endl;
			continue ;
		}
		return (line);
	}
}

int	GetIndex() {

	std::string	line;
	int			index;

	while (true)
	{
		std::cout << "Please enter an index :" << std::endl;
		std::getline(std::cin, line);
		if (line.length() == 1 && std::isdigit(line[0])) {
			index = line[0] - '0';
			if (index >= 0 && index < 9)
				return index;
		}
		std::cout << "Invalid index please retry..." << std::endl;
	}
}

void	DisplayTruncLine(std::string line) {
	std::cout << line.substr(0, 9);
	std::cout << ".";
}

void	DisplaySpaceLine(std::string line, int space) {
	while (space-- > 0)
		std::cout << " ";
	std::cout << line;
}

void	DisplayLine(std::string line) {
	int	space = 10 - line.length();
	if (space == 0)
		std::cout << line;
	else if (space < 0)
		DisplayTruncLine(line);
	else if (space > 0)
		DisplaySpaceLine(line, space);
}
