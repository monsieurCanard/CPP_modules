/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_display.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:17:36 by anthony           #+#    #+#             */
/*   Updated: 2024/07/12 12:52:47 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/**
 * @brief display explicit message to the user to help him to use the software
 */
void	DisplayLaunch() {
	std::cout << "              ----------------------------" << std::endl;
	std::cout << "   Welcome in my Duckky Crappy Awesome phonebook software !" << std::endl;
	std::cout << "              ----------------------------" << std::endl << std::endl;
	std::cout << "Please enter one of these 3 choices :" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "ADD :    Save a new contact" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "SEARCH : Display a specific contact" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
}

void	DisplayPhoneBookTop() {

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

/**
 * @brief display the line with the index
 * @param index index of the contact
 */
void	DisplayContactLine(int index) {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout	<< "Index : " 
				<< index << std::endl;
}

/**
 * @brief display the line with the line
 * @param line line to display
 */
void	DisplayContactLine(std::string needed, std::string line) {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << needed << " : " << line << std::endl;
}

/**
 * @brief take the 9 first characters of the line, replace the last by a dot and display it
 * @param line line to display
*/
void	DisplayTruncLine(std::string line) {
	std::cout << line.substr(0, 9) << ".";
}

/**
 * @brief display the line with the space needed before displaying it
 * @param line line to display
 * @param space space needed before the line
 */
void	DisplaySpaceLine(std::string line, int space) {
	while (space-- > 0)
		std::cout << " ";
	std::cout << line;
}

 /**
  * @brief check if the line is longer or shorter than 10 characters and display it
  * @param line line to display
  */
void	DisplayLine(std::string line) {
	
	int	space = 10 - line.length();
	
	if (space == 0) std::cout << line;
	else if (space < 0) DisplayTruncLine(line);
	else if (space > 0) DisplaySpaceLine(line, space);
}