/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:55:17 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/13 09:49:49 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook Constructor called" << std::endl;
	DisplayLaunch();
};

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook Destructor called" << std::endl;
};

/**
 * @brief Get all the information for a contact
 * and store it in the contact array
 */
void PhoneBook::addContact(int index) {
	
	std::string line;

	contact[index].setIndex(index + 1);

	line = GetAnswer("First Name");
	contact[index].setFirstName(line);

	line = GetAnswer("Last Name");
	contact[index].setLastName(line);

	line = GetAnswer("Nickname");
	contact[index].setNickname(line);

	line = GetAnswer("Phone Number");
	contact[index].setPhoneNumber(line);

	line = GetAnswer("Darkest Secret");
	contact[index].setSecret(line);
}

/**
 * @brief Get the index of the contact to display and display it
 */
void PhoneBook::getContact() {
	
	displayAllContacts();
	int index = GetIndex();
	if (index == -1)
		return;
	displayContact(index - 1);
}

/**
 * @brief Display the contact at the index given
 * @param index index of the contact
 */
void PhoneBook::displayContact(int index)
{
	if (contact[index].getFirstName().empty())
	{
		std::cout << "This contact does not exist...Sorry..." << std::endl;
		return;
	}
	DisplayContactLine(index);
	DisplayContactLine("First name", contact[index].getFirstName());
	DisplayContactLine("Last name", contact[index].getLastName());
	DisplayContactLine("Nickename", contact[index].getNickname());
	DisplayContactLine("PhoneNumber", contact[index].getPhoneNumber());
	DisplayContactLine("Secret", contact[index].getSecret());
	std::cout << "---------------------------------------------" << std::endl << std::endl;
}

/**
 * @brief Display all the contacts in the phonebook
 */
void PhoneBook::displayAllContacts(void) {

	int	index = 0;
	
	DisplayPhoneBookTop();
	while (index < 8 && !contact[index].getFirstName().empty())
	{
		std::cout << "|         " << contact[index].getIndex() << "|";
		DisplayLine(contact[index].getFirstName());
		std::cout << "|";
		DisplayLine(contact[index].getLastName());
		std::cout << "|";
		DisplayLine(contact[index].getNickname());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		index++;
	}
	
} 