/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:02:04 by anthony           #+#    #+#             */
/*   Updated: 2024/07/04 16:28:14 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void)
{
	PhoneBook phonebook;
	std::string line;
	int	index = 0;
	
	while (true)
	{
		std::cout << "Please enter a command :" << std::endl;
		std::getline(std::cin, line);
		if (strcmp(line.c_str(), "EXIT") == 0)
			break ;
		else if (strcmp(line.c_str(), "ADD") == 0)
			phonebook.AddContact(index++);
		else if (strcmp(line.c_str(), "SEARCH") == 0)
			phonebook.GetContact();
	}
	return (0);
}