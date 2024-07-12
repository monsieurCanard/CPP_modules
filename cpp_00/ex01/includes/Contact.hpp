/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:17:55 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/07/12 12:31:47 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	
	private:
		std::string	_phone_number;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_secret;
		int			_index;

	public:
		Contact();
		~Contact();

		void	setIndex(int index);
		void	setFirstName(std::string line);
		void	setLastName(std::string line);
		void	setNickname(std::string line);
		void	setPhoneNumber(std::string line);
		void	setSecret(std::string line);

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getSecret() const;
		int			getIndex() const;
};

#endif