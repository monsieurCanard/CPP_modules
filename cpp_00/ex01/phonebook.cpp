/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:55:17 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/06/14 19:24:45 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "Hello i'm the phonebook !" << std::endl;
	for (int i = 0; i < 8; i++)
		contact[i] = Contact();
};

PhoneBook::~PhoneBook(){
};

void PhoneBook::DisplayPhonebook() {
	std::cout << "----------------------------" << std::endl;
	std::cout << "   Welcome in PhoneBook !" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Please enter one of these 3 commands :" << std::endl;
	std::cout << "ADD : Save a new contact" << std::endl;
	std::cout << "SEARCH : Display a specific contact" << std::endl;
	std::cout << "EXIT" << std::endl;
}

void PhoneBook::AddContact(int index) {
	
	std::string line;

	std::cout << "Enter your first name :" << std::endl;
	std::getline(std::cin, line);
	contact[index].SetFirstName(line.c_str());

	std::cout << "Enter your last name :" << std::endl;
	std::getline(std::cin, line);
	contact[index].SetLastName(line.c_str());

	std::cout << "Enter your nickname :" << std::endl;
	std::getline(std::cin, line);
	contact[index].SetNickname(line.c_str());

	std::cout << "Enter your phone number :" << std::endl;
	std::getline(std::cin, line);
	contact[index].SetPhoneNumber(line.c_str());

	std::cout << "Enter your darkest secret :" << std::endl;
	std::getline(std::cin, line);
	contact[index].SetSecret(line.c_str());
}

void PhoneBook::DisplayContact(int index) {

	std::cout << "First Name : " << contact[index].GetFirstName() << std::endl;
	std::cout << "Last Name : " << contact[index].GetLastName() << std::endl;
	std::cout << "Nickname : " << contact[index].GetNickname() << std::endl;
	std::cout << "Phone Number : " << contact[index].GetPhoneNumber() << std::endl;
	std::cout << "Secret : " << contact[index].GetSecret() << std::endl;
}