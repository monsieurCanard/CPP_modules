/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:10:23 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/19 18:05:25 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define ORANGE "\033[38;5;208m"
#define RED "\033[38;5;196m"
#define TEAL "\033[38;5;49m"
#define PURPLE "\033[38;5;129m"
#define OLIVE "\033[38;5;58m"
#define RESET "\033[0m"

#include "Contact.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

class	PhoneBook {

	private:
		Contact		contact[8];
		
		int			getIndex();
		std::string	getAnswer(std::string needed);

		void		displayLaunch();
		void		displayPhoneBookTop();
		void		displayAllContacts();
		void		displayLine(std::string line);
		void		displayContactLine(int index);
		void		displayContactLine(std::string needed, std::string line);
		void		displayContact(int index);

	public:
		PhoneBook();
		~PhoneBook();

		void	addContact(int index);
		void	getContact();
		void	displayCmd();
};

#endif
