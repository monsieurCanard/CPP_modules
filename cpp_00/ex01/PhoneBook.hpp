/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:10:23 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/06/14 18:16:24 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		void DisplayPhonebook(void);
		void AddContact(int index);
		void DisplayContact(int index);
		void CreateContact();

	private:
		Contact contact[8];
};

#endif
