/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:02:04 by anthony           #+#    #+#             */
/*   Updated: 2024/06/13 17:07:56 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdio>
#include <string.h>



int main(void)
{
	PhoneBook phonebook;
	std::string line;
	int	index = 0;
	
	phonebook.display_phonebook();
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