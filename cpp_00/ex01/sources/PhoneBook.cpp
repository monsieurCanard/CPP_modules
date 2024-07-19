/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:55:17 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/19 18:09:01 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook Constructor called" << std::endl;
	displayLaunch();
};

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook Destructor called" << std::endl;
};

/**
 * @brief Get all the information for a contact
 * and store it in the contact array
 */
void	PhoneBook::addContact(int index) {
	
	std::string line;

	contact[index].setIndex(index + 1);

	line = getAnswer("First Name");
	contact[index].setFirstName(line);

	line = getAnswer("Last Name");
	contact[index].setLastName(line);

	line = getAnswer("Nickname");
	contact[index].setNickname(line);

	line = getAnswer("Phone Number");
	contact[index].setPhoneNumber(line);

	line = getAnswer("Darkest Secret");
	contact[index].setSecret(line);
}

/**
 * @brief Get the index of the contact to display and display it
 */
void	PhoneBook::getContact() {
	
	displayAllContacts();
	int index = getIndex();
	if (index == -1)
		return;
	displayContact(index - 1);
}


/**
* @brief get the answer of the user and verify if it's a valid answer
* @param needed element needed
* @return answer of the user
*/
std::string	PhoneBook::getAnswer(std::string needed) {
	
	std::string line;
	
	while (true)
	{
		std::cout	<< TEAL "Enter your " << needed << " : " RESET
					<< std::endl;
		std::getline(std::cin, line);

		if (std::cin.eof()) exit (0);
		else if (line.length() != 0)
		{
			for (size_t i = 0; i < line.length(); i++) {
				if (isalnum(line[i]) == 0) break ;
				else if (i == line.length() - 1) return line;
			}
		}
		std::cout	<< std::endl
					<< RED "Invalid answer please retry..."
					<< RESET << std::endl;
		continue;
	}
	return (line);
}

/**
 * @brief get the index and verify if it's a valid index
 * @return index of the contact requested
 */
int	PhoneBook::getIndex() {

	std::string	line;
	int			index;

	while (true)
	{
		std::cout << TEAL "Please enter an index :" RESET<< std::endl;
		std::getline(std::cin, line);

		if (std::cin.eof()) exit (0);
		else if (line == "EXIT" || line == "exit") return (-1);
		else if (line.length() == 1 && std::isdigit(line[0]))
		{
			index = line[0] - '0';
			if (index > 0 && index < 9) return index;
		}
		std::cout << RED "Invalid index please retry..." << RESET << std::endl;
	}
}

/**
 * @brief Display the contact at the index given
 * @param index index of the contact
 */
void	PhoneBook::displayContact(int index)
{
	if (contact[index].getFirstName().empty())
	{
		std::cout << RED "This contact does not exist...Sorry..." RESET << std::endl;
		return;
	}
	displayContactLine(index + 1);
	displayContactLine("First name", contact[index].getFirstName());
	displayContactLine("Last name", contact[index].getLastName());
	displayContactLine("Nickname", contact[index].getNickname());
	displayContactLine("PhoneNumber", contact[index].getPhoneNumber());
	displayContactLine("Secret", contact[index].getSecret());
	std::cout << TEAL "---------------------------------------------" RESET << std::endl << std::endl;
}

/**
 * @brief Display all the contacts in the phonebook
 */
void	PhoneBook::displayAllContacts(void) {

	int	index = 0;
	
	displayPhoneBookTop();
	while (index < 8 && !contact[index].getFirstName().empty())
	{
		std::cout << PURPLE "|         " << contact[index].getIndex() << "|";
		displayLine(contact[index].getFirstName());
		std::cout << "|";
		displayLine(contact[index].getLastName());
		std::cout << "|";
		displayLine(contact[index].getNickname());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << RESET << std::endl;
		index++;
	}
	
}


/**
 * @brief display explicit message to the user to help him to use the software
 */
void	PhoneBook::displayLaunch() {
	std::cout << "              ----------------------------" << std::endl;
	std::cout << "   Welcome in my Duckky Crappy Awesome Phonebook software !" << std::endl;
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

/**
 * @brief display explicit message to the user to help him to use the phonebook
 */
void	PhoneBook::displayCmd() {
	std::cout << "------------------------------------------------------ " << std::endl;
	std::cout << "Please enter one of these 3 choices :" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "ADD :    Save a new contact" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "SEARCH : Display a specific contact" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "------------------------------------------------------ " << std::endl;
}

/**
 * @brief display the top of the phonebook
 */
void	PhoneBook::displayPhoneBookTop() {

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

/**
 * @brief display the line with the index
 * @param index index of the contact
 */
void	PhoneBook::displayContactLine(int index) {
	std::cout << TEAL "---------------------------------------------" << std::endl;
	std::cout	<< "Index : " << OLIVE
				<< index << RESET << std::endl;
}

/**
 * @brief display the needed with his value
 * @param line line to display
 */
void	PhoneBook::displayContactLine(std::string needed, std::string line) {
	std::cout << TEAL "---------------------------------------------" << std::endl;
	std::cout << needed << " : " << OLIVE << line << RESET << std::endl;
}

