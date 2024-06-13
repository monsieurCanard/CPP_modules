/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:55:17 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/06/13 17:06:19 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	std::cout << "Hello i'm the phonebook !" << std::endl;
};

PhoneBook::~PhoneBook(){
	
};

void PhoneBook::display_phonebook(){
	std::cout << "----------------------------" << std::endl;
	std::cout << "   Welcome in PhoneBook !" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Please enter one of these 3 commands :" << std::endl;
	std::cout << "ADD : Save a new contact" << std::endl;
	std::cout << "SEARCH : Display a specific contact" << std::endl;
	std::cout << "EXIT" << std::endl;
}