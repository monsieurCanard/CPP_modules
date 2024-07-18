/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:55:41 by anthony           #+#    #+#             */
/*   Updated: 2024/07/18 15:08:14 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
* @brief get the answer of the user and verify if it's a valid answer
* @param needed element needed
* @return answer of the user
*/
std::string	GetAnswer(std::string needed) {
	
	std::string line;
	
	while (true)
	{
		std::cout	<< GREEN "Enter your " << needed << " : " RESET
					<< std::endl;
		std::getline(std::cin, line);

		if (std::cin.eof()) exit (0);
		else if (line.length() != 0)
		{
			for (size_t i = 0; i < line.length(); i++) {
				if (isalnum(line[i]) == 0) break ;
			return line;
			}
		}
		std::cout	<< std::endl
					<< "Invalid answer please retry..."
					<< std::endl;
		continue;
	}
	return (line);
}

/**
 * @brief get the index and verify if it's a valid index
 * @return index of the contact requested
 */
int	GetIndex() {

	std::string	line;
	int			index;

	while (true)
	{
		std::cout << GREEN "Please enter an index :" RESET<< std::endl;
		std::getline(std::cin, line);

		if (std::cin.eof()) exit (0);
		else if (line == "Exit" || line == "exit") return (-1);
		else if (line.length() == 1 && std::isdigit(line[0]))
		{
			index = line[0] - '0';
			if (index > 0 && index < 9) return index;
		}
		std::cout << "Invalid index please retry..." << std::endl;
	}
}


