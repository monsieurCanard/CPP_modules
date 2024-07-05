/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:10:23 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/04 16:28:31 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		void AddContact(int index);
		void GetContact();
		void DisplayAllContacts();
		void DisplayContact(int index);
	private:
		Contact contact[8];
};

#endif
