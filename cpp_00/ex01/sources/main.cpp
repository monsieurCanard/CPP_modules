/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:02:04 by anthony           #+#    #+#             */
/*   Updated: 2024/07/18 15:01:13 by anthony          ###   ########.fr       */
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
		std::cout << RED "Please enter a command :" RESET << std::endl;
		std::getline(std::cin, command);

		if (std::cin.eof())
			break ;
		else if (index == 8) index = 0;
		else if (command == "EXIT" || command == "exit") break ;
		else if (command == "ADD" || command == "add") phonebook.addContact(index++);
		else if (command == "SEARCH" || command == "search") phonebook.getContact();
		else std::cout << "Invalid command, please retry !" << std::endl;
		DisplayCmd();
	}
}