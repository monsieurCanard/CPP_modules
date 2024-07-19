/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:17:36 by anthony           #+#    #+#             */
/*   Updated: 2024/07/19 17:59:41 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


/**
 * @brief take the 9 first characters of the line, replace the last by a dot and display it
 * @param line line to display
*/
void	displayTruncLine(std::string line) {
	std::cout << line.substr(0, 9) << ".";
}

/**
 * @brief display the line with the space needed before displaying it
 * @param line line to display
 * @param space space needed before the line
 */
void	displaySpaceLine(std::string line, int space) {
	while (space-- > 0)
		std::cout << " ";
	std::cout << line;
}

 /**
  * @brief check if the line is longer or shorter than 10 characters and display it
  * @param line line to display
  */
void	PhoneBook::displayLine(std::string line) {
	
	int	space = 10 - line.length();
	
	if (space == 0) std::cout << line;
	else if (space < 0) displayTruncLine(line);
	else if (space > 0) displaySpaceLine(line, space);
}