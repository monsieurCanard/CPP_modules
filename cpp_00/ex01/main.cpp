/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:02:04 by anthony           #+#    #+#             */
/*   Updated: 2024/06/14 19:21:38 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdio>
#include <string.h>
#include <cstdlib>

static void	get_contact(PhoneBook phonebook)
{
	std::string line;
	int	index;

	std::cout << "Please enter an index :" << std::endl;
	std::getline(std::cin, line);
	index = atoi(line.c_str());
	std::cout << index << std::endl;
	phonebook.DisplayContact(0);
}

static void	action_phonebook(PhoneBook phonebook, const char *line, int index)
{
	if (strcmp(line, "ADD") == 0)
		phonebook.AddContact(index);
	else if (strcmp(line, "SEARCH") == 0)
		get_contact(phonebook);
}

int main(void)
{
	PhoneBook phonebook;
	std::string line;
	int	index = 0;
	
	phonebook.DisplayPhonebook();
	while (true)
	{
		std::cout << "Please enter a command :" << std::endl;
		std::getline(std::cin, line);
		if (strcmp(line.c_str(), "EXIT") == 0)
			break ;
		else
			action_phonebook(phonebook, line.c_str(), index);
		phonebook.DisplayContact(index);
		index++;
	}
	return (0);
}