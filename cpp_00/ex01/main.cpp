/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:02:04 by anthony           #+#    #+#             */
/*   Updated: 2024/06/13 16:54:45 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdio>
#include <string.h>

static void	menuPhonebook(void)
{
	std::cout << "----------------------------" << std::endl;
	std::cout << "   Welcome in PhoneBook !" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Please enter one of these 3 commands :" << std::endl;
	std::cout << "ADD : Save a new contact" << std::endl;
	std::cout << "SEARCH : Display a specific contact" << std::endl;
	std::cout << "EXIT" << std::endl;
}

int main(void)
{
	menuPhonebook();
	std::string line;
	PhoneBook phonebook;
	int	index = 0;
	
	while (true)
	{
		Contact contact = index;
		std::getline(std::cin, line);
		if (strcmp(line.c_str(), "EXIT") == 0)
			break ;
		std::cout << contact.get_index() << std::endl;
		index++;	
	}
	
	return (0);
}