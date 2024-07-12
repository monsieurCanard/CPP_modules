/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:10:23 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 12:50:37 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

class	PhoneBook {

	private:
		Contact contact[8];

	public:
		PhoneBook();
		~PhoneBook();

		void addContact(int index);
		void getContact();
		void displayContact(int index);
		void displayAllContacts();
};

void		DisplayLaunch();
void		DisplayPhoneBookTop();
void		DisplayContactLine(std::string needed, std::string line);
void		DisplayContactLine(int index);
void		DisplayLine(std::string line);


std::string	GetAnswer(std::string needed);
int			GetIndex();

#endif
