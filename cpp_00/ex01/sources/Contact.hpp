/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:17:55 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/09 16:52:36 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;

	public:
		Contact();
		~Contact();
		void	SetIndex(int index);
		void	SetFirstName(std::string line);
		void	SetLastName(std::string line);
		void	SetNickname(std::string line);
		void	SetPhoneNumber(std::string line);
		void	SetSecret(std::string line);
		int			GetIndex() const;
		std::string	GetFirstName() const;
		std::string	GetLastName() const;
		std::string	GetNickname() const;
		std::string	GetPhoneNumber() const;
		std::string	GetSecret() const;
};

#endif