/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:02:04 by anthony           #+#    #+#             */
/*   Updated: 2024/07/18 09:30:56 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	int			index = 0;
	
	while (true)
	{
		std::cout << "Please enter a command :" << std::endl;
		std::getline(std::cin, command);

		if (std::cin.eof())
			break ;
		else if (index == 8) index = 0;
		else if (command == "EXIT" || command == "exit") break ;
		else if (command == "ADD" || command == "add") phonebook.addContact(index++);
		else if (command == "SEARCH" || command == "search") phonebook.getContact();
		else std::cout << "Invalid command, please retry !" << std::endl;
	}
}