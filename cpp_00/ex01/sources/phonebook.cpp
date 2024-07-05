/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:55:17 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/04 16:27:35 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook_utils.hpp"

PhoneBook::PhoneBook() {
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
};

PhoneBook::~PhoneBook(){
};

void PhoneBook::AddContact(int index) {
	
	std::string line;
	
	contact[index].SetIndex(index);
	
	line = GetAnswer("First Name");
	contact[index].SetFirstName(line);

	line = GetAnswer("Last Name");
	contact[index].SetLastName(line);

	line = GetAnswer("Nickname");
	contact[index].SetNickname(line);

	line = GetAnswer("Phone Number");
	contact[index].SetPhoneNumber(line);

	line = GetAnswer("Darkest Secret");
	contact[index].SetSecret(line);
}

void PhoneBook::GetContact() {
	
	int	index;

	DisplayAllContacts();
	index = GetIndex();
	this->DisplayContact(index);
}

void PhoneBook::DisplayContact(int index)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Index :" << std::endl;
	std::cout << index << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "First Name : ";
	std::cout << contact[index].GetFirstName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Last Name : ";
	std::cout << contact[index].GetLastName() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Nickname : ";
	std::cout << contact[index].GetNickname() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Phone Number : ";
	std::cout << contact[index].GetPhoneNumber() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Darkest Secret : ";
	std::cout << "CONFIDENTIAL" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::DisplayAllContacts(void) {

	int	index = 0;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (index < 8 && !contact[index].GetFirstName().empty())
	{
		std::cout << "|         ";
		std::cout << contact[index].GetIndex();
		std::cout << "|";
		DisplayLine(contact[index].GetFirstName());
		std::cout << "|";
		DisplayLine(contact[index].GetLastName());
		std::cout << "|";
		DisplayLine(contact[index].GetNickname());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		index++;
	}
	
} 